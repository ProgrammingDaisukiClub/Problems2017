# Description
人が左から右に1列に並んでいる様子が文字列Sで与えられる。
'o'のところには人がいて、'.'のところには人がいない、'x'のところには障害物がある。  
人々はこれから馬跳びをしようとしている。  
一回の馬跳びは以下のように決められる。  

*ある人の右に連続して一人以上の人を挟んで、人のいないところが存在する場合、その人はそこに跳んで移動できる。ただし、障害物が間にある場合は飛び越えられない。*

人々はなるべくたくさん馬跳びを楽しみたい。人々ができる馬跳びの合計回数の最大値を求めよ。

# Constraints
 - 1 <= |S| <= 100  
 Sは'.'と'x'と'o'のみからなる。

# Input
入力は複数のデータセットからなる。最初の1行目にはデータセットの個数Tが記される。
2行目以降は、T個のデータセットが連続して記される。 1つのデータセットは以下の形式で与えられる。

    S

# Output
各データセットに対して、人々ができる馬跳びの合計回数の最大値を出力せよ。

# Sample Input

    2
    ooo.
    o.oo.x.oo.

# Sample Output

    1
    2