# Codeforces-Round404-Div.2-
Codeforces#404 (Div.2)の自分の解答

# 生じた問題点

配列で要素数200000くらいの大きなものを宣言するとコンパイルできるが実行できなくなる。設定により変えたいが使用者が少なく対応するのは困難。

あまり気は進まないがGCCに乗り換える必要があるかも。
# A
文字列認識して足し算するだけ。

# B
最も数字が大きな右端から最も数字が小さな左端を引いたものが答えの候補となりうる。したがってソートするとl1-r2とl2-r1の2通りに絞れ、後は最大値を取る。

# C
愚直にやると当然間に合わず。代数的に解く方法がありそうだが、結局思いつくに至らなかった。

# E
バブルソートの交換回数を配列の要素を交換するごとに求める。これはとても効率がよく、O(qnlog n)で解けるはずだが、これでは効率が悪かったらしくTLE。

これ以上打つ手はなかった。
