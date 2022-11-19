import math
import numpy as np

"""

条件付き確率場 = 識別モデル　結果を足せば1になる

ファイ関数　fai( 単語, 品詞) = これが特徴量になっている
重み : 調整を行うパラメータのこと
https://youtu.be/InS4KyB3uoM


わかり安い生地
https://data-analytics.fun/2020/12/02/conditional-random-fields/

多分

Wベクトル: 重みベクトル　これを更新する
Yベクトル : 品詞列
Xベクトル: 文章
- p(X|Y)の最大値を求める（最大尤度



FAI : 素性関数　
φ_t: 素性関数　φ(X,Y) Yなら1　Y出ないなら0 を算出する
素性テンプレート

それぞれの条件確率

"""

"""
問１
"""
n = "2211278"
n = list(reversed(list(map(lambda s : int(s),n))))
n.insert(0,0)




ans1 = [0]*18
ans1[1] = (n[1]+n[2])/20
ans1[2] = (n[2]+n[3])/20
ans1[3] = (n[1]+n[3])/20
ans1[4] = (n[1])/20
ans1[5] = (n[2])/20
ans1[6] = (n[3])/20
ans1[7] = (n[1]+10)/20
ans1[8] = (n[2]+11)/20
ans1[9] = (n[3]+12)/20
ans1[10] = (n[1]+1)/20
ans1[11] = (n[2]+n[3])/20

ans1[12] = ans1[1] + ans1[4] + ans1[10]
ans1[13] = ans1[1] + ans1[5] + ans1[11]
ans1[14] = ans1[2] + ans1[6] + ans1[10]
ans1[15] = ans1[2] + ans1[7] + ans1[11]
ans1[16] = ans1[3] + ans1[8] + ans1[10]
ans1[17] = ans1[3] + ans1[9] + ans1[11]

print(ans1)

"""
問２


"""
ans2 = [0]*7


print([ math.exp(ans1[i]) for i in range(12,18) ])
z = sum( [ math.exp(ans1[i]) for i in range(12,18) ])#条件付き確率を求めるのでｚを求める
print(z)
for i in range(6):
    ans2[i+1] = math.exp(ans1[i+12])/z

print(ans2)


"""
問３
"""

ans3 = [0] *6
ans3[1] = ans2[1]+ans2[2]
ans3[2] = ans2[3]+ans2[4]
ans3[3] = ans2[5]+ans2[6]
ans3[4] = ans2[1]+ans2[3]+ans2[5]
ans3[5] = ans2[2]+ans2[4]+ans2[6]
print(ans3)

"""
問４



𝑖(𝐰|𝐱(𝑖),𝐲(𝑖))=−log𝑃(𝐲(𝑖)|𝐱(𝑖))=−𝐰⋅𝜙(𝐱(𝑖),𝐲(𝑖))+log(𝑍)
"""

ans4 = [0] * 12
ans4[1] = ans1[1] + (1- ans3[1])
ans4[2] = ans1[2] + (1-ans3[2])
ans4[3] = ans1[3] +(1-ans3[3])
ans4[4] = ans1[4] + (1-ans2[1])
ans4[5] = ans1[5] + (1-ans2[2])
ans4[6] = ans1[6] + (1-ans2[3])
ans4[7] = ans1[7] + (1-ans2[4])
ans4[8] = ans1[8] + (1-ans2[5])
ans4[9] = ans1[9] + (1-ans2[6])
ans4[10] = ans1[10] + (1-ans3[4])
ans4[11] = ans1[11] + (1-ans3[5])

print(ans4)
