# Codeforces-Round404-Div.2-
Codeforces#404 (Div.2)の自分の解答

# 生じた問題点

配列で要素数200000くらいの大きなものを宣言するとコンパイルできるが実行できなくなる。設定により変えたいが使用者が少なく対応するのは困難。（使用コンパイラ：cl(MS)）

あまり気は進まないがGCCに乗り換える必要があるかも。
# A
文字列認識して足し算するだけ。

# B
最も数字が大きな右端から最も数字が小さな左端を引いたものが答えの候補となりうる。したがってソートするとl1-r2とl2-r1の2通りに絞れ、後は最大値を取る。

# C
愚直にやると当然間に合わず。代数的に解く方法がありそうだが、結局思いつくに至らなかった。

追記(2017/3/17)

（http://hamayanhamayan.hatenablog.jp/entry/2017/03/16/032721 の方法）

n<=mの場合は、毎回全部補充されるので最初に全部なくなるn日目が答えとなる。n>mの場合は、m日目以降はだんだん倉庫の中身が減っていく。このとき(m+i)日目の残りの穀物の量を表すと、n-m-(1+2+...+i)となる。よってn-m<=(1+2+...+i)となる最小のiを求めれば良い。これは二分探索によって求まる。ただし、整数の割り算による無限ループは回避するように適宜調節する。

C++のlong long型でこの二分探索を実装したところ、初期値の最大値として与える値にオーバーフローするカッツカツ（long long型がおよそ9\*10^18なので3\*10^9）でないと通らなかった。

# E
バブルソートの交換回数を配列の要素を交換するごとに求める。これはとても効率がよく、O(qnlog n)で解けるはずだが、これでは効率が悪かったらしくTLE。

これ以上打つ手はなかった。
