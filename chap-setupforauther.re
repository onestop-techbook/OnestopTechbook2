= 執筆環境構築(参加者編)

本章では、参加者の環境構築について述べます。

== Re:VIEW環境を(ローカルに)構築する

=== WindowsでRe:VIEWを使う方法

https://qiita.com/implicit_none/items/398c6e0bbedc8b160621

TeXとRubyだけでWindowsにRe:VIEW環境を構築した話(暗黙の型宣言@implicit_none)

ここに必要なことはすべて書いてくれてあります。

TeXをインストールし、Rubyをインストールし、Re:VIEWをインストールします。仮想環境は必要ありません。

あとは、原稿のあるフォルダで、

>review-pdfmaker config.yml

でpdfが書きだされるはずです。

=== WindowsでDockerを使う方法

WindowsでDockerを使う場合、以下の記事が大変参考になります。

Windowsで「簡単にRe:VIEWを使うために、Dockerを使いましょう」という記載が多いですが、Docker構築もなかなか大変です。

参考:Windows 10 HomeでWSL越しにDocker for Ubuntu+Re:VIEWを使う（VM不要）ほしまど

https://qiita.com/hoshimado/items/78cccdaffd41dc47837e

エディタには、Visual Studio CodeにRe:VIEWプラグインを入れることをお勧めします。

なお、少し不便ですが、CIがあるのでローカル環境は構築しないという方針もありです。実際筆者は、初めてRe:VIEWで本を書いたとき(技術同人誌を書こう-アウトプットのススメの同人版。220ページのうち約40ページ)、エディタ(TeraPad)だけで書きました。ある程度原稿を書いたら、GitHubにPushして、CIでコンパイルして確かめる、という書き方です。少々面倒ですが、何とかなります。一応今は、VSCodeで本文書いて、Docker使ってローカルでコンパイルして、GitHubにPushするというところまでできるようになりました。まだまだ試行錯誤は多いですが・・・

== DockerでRe:VIEW
Dockerが使える場合、なんら困ることはありません。config.ymlを叩いてやればOKです。

Docker自体がそれ単体で本のネタになるくらいですが、ありものを使う分にはとても便利ですね。

== SourceTreeを使ってGitHubで原稿を管理する
SourceTreeというGUIのGitクライアントソフトがあります。わかばちゃんと学ぶGit使い方入門で紹介されているソフトですね。素晴らしい参考書になりますので、Gitに慣れていない場合はぜひ読んでみてください。

Sourcetreeを使って、既存のリポジトリをローカルにクローン(もとのGitから自分のGitにコピーすることをフォーク、さらにローカルにコピーして持ってくることをクローンといいます。)します。

//image[GitSet_NewTab][新しいタブを作る][scale=1.0]

まずは上方の＋ボタンを押して、新しいタブを作ります。

//image[GitSet_NewClone][既存リポジトリをCloneする][scale=0.5]

//image[GitSet_CloneToMyRep][Cloneするリポジトリを設定][scale=0.5]

GitHubの当該リポジトリのURLを入力すると、ローカルフォルダもほぼ自動的に入ります。Cloneボタンをクリックすると、Cloneが始まり、しばらくすると、樹形図が見れるようになります。

ですがこの状態では、もとのリポジトリ(テンプレート)と、ローカルのリポジトリしかないことになります。

GitIDを持っていて、マスターのリポジトリに直接Pushしてよい場合は、これで執筆が開始できます。

Pull Requestを出していく場合には、自分のリモートリポジトリを作る必要があります。
ですから、次に、原稿リポジトリを作る必要があります。もちろん一人執筆ならローカルのみでも構いませんが、合同誌なので複数人でのアクセスが前提になります。
