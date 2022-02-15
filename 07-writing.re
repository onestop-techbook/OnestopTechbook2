= 執筆環境

DTP（DeskTop Publishing)と呼ばれるものが一般化した現代、ひとまず執筆環境としてはコンピュータを使ったものを前提としてこの章では色々紹介してみます。Text:erukiti/佐々木俊介

== DTPツールを使う

ソフト上で文字やイラストを並べて作業をすすめるソフトを広い意味でDTPソフトと呼称することができます。プロも使っているDTPソフトといえば、Adobe InDesignが業界標準です。あまり技術同人誌では出番が無いかも知れませんが、Adobe InDesign を使えば凝った本を作成できるでしょう。

また、技術書を書く場合、ワープロソフトがそのままDTPソフトになります。したがって、Microsoft Wordを使うとお手軽に同人誌を書けます。Wordは、たいていの(Windowsのビジネス/ホーム用の)PCにインストールされているし、日常的に使うこともあるでしょうから、とりあえず使い方に困ることは少ないかと思います。そういう意味で、初めて技術書を書く場合の執筆ツールとしてはBestな選択です。使い方で迷う前に本文を書き上げてしまいましょう。なお、効率的に書くならフォーマットをうまくいじるといいです。Appendix Cに技術書を書く場合のWordの使い方エッセンスがありますのでこちらを参照することをおすすめします。

また、ワープロソフトとして有名な一太郎も、ここ数年は同人誌執筆層を取り込みにかかっています。最新の一太郎では、主要な印刷所のフォーマットに合わせたpdfをいきなり出力できる機能が追加されたようです。

さて、DTPツールを使う場合、いきなりそのソフトで書き始めるより、テキストエディタで本文を書いてから、そのソフトに流し込み、図を貼り付けたり、参照関係を調整をするほうが楽に書けるのではないかと筆者は感じています。まずは細かい使い勝手に左右されるのではなく、文章の内容や構成を作り込む方に集中すると良いと思います。ざっくり5割から8割くらいの分量を書くまではテキストエディタで十分だと思います。


== テキストファイルをコンパイルする系の版組ツールを使う

なんらかのテキストエディタを使って、ソースコードをコンパイルするというのはソフトウェア技術者にとってはなじみ深いと思います。技術書典で出されている本の多くはそういった手法が使われています。

  * Re:VIEW
  * Markdown
  * HTML+CSS
  * Sphinx
  * TeX/LaTeX

だいたいここらへんが人気あるところでしょうか。いずれも、本文を書いて、体裁に関する命令を間にはさみ、コンパイルするとpdfなどの入稿可能なファイルが出力されます。

=== Re:VIEW

Re:VIEW@<fn>{Re:VIEW}は現時点ではkmuto@<fn>{kmuto}さんを中心に40人以上の開発者が参加するオープンソースな組み版ソフトです。実際にいくつもの出版社が採用しているプロユースのソフトですが、技術系同人誌でもよく使われるなど、プロもアマチュアも使うとても便利なソフトです。
//footnote[Re:VIEW][@<href>{http://reviewml.org/}]
//footnote[kmuto][@<href>{https://github.com/kmuto}]

技術系同人誌でよく使われるのは、技術同人誌の大家であるTechBoosterさんがそのノウハウを惜しみなく詰め込んだリポジトリを公開しているため、環境さえ構築できれば、そのまま書き始められるという利点があるためです。

  * @<href>{https://github.com/TechBooster/ReVIEW-Template}
  * @<href>{https://github.com/TechBooster/C89-FirstStepReVIEW-v2}

後者は実際にコミケC89で販売されていた「技術書をかこう！　はじめてのRe:VIEW　改訂版」という本のソースコードに該当します。

実は、本書の同人誌バージョンもGitHubですべて公開されています。https://github.com/onestop-techbook/c93-onestop-techbookというリポジトリが、本書の同人誌バージョンのソースコードなのです。環境を整えれば、同人誌版のPDFやepubを生成できます。本書は、@<tt>{ReVIEW-Template}をベースに書かれています。

  * @<href>{https://github.com/onestop-techbook/c93-onestop-techbook}

Re:VIEWでは、㈱アスキー(当時)で使われていた画期的な電子出版システム「EWB（Editor's Work Bench）」の書式をベースにしつつ簡易化した記述方法で本を書きます。Markdownや他のWikiとは違う少し癖があるように感じられる記法ですが、組み版に特化していて必要十分な機能を持っています。

おおまかに分けて、行単位の命令と文章の中に入れるインライン命令で構成されています。

//listnum[list-test][リストのテスト]{
#@mapfile(sample/01-writing/hoge.re)
= Re:View はこんな感じでかきますよー の章

== ほげー

ふがー@<code>{@}<fn>{fuga}
//footnote[fuga][ふがー]

ぴよー

@<code>{#@#} コメント
#@end
//}

#@# リストの中でもRe:Viewのインライン命令を解釈してしまうので要注意
#@# #@ で始まる行に関しても、プリプロセッサの都合があるので、こんな感じに

たとえば@<list>{list-test}は実際のRe:VIEWのソースコードです。

もっと知りたければ、@<href>{https://github.com/onestop-techbook/c93-onestop-techbook} を開いてみてください。本書の原稿はRe:VIEWで書かれていて Github で公開されています。RubyとTeXさえ準備できれば、本書をそのままコンパイルしてPDFを生成できます。

@<code>{=} で始まる行は見出しです。特に@<code>{=}のようなイコール記号が1つのものは章です。

  * @<code>{=} 章
  * @<code>{==} 節
  * @<code>{===} 項
  * @<code>{====} 段
  * @<code>{=====} 小段

@<code>{//} で始まる行はブロック命令です。

@<code>{@}<code>{fuga}のような命令はインライン命令です。

詳しくは公式Wiki@<fn>{format-ja}をご覧ください。
//footnote[format-ja][@<href>{https://github.com/kmuto/review/blob/master/doc/format.ja.md}]

Re:VIEWの書式の詳細については、Appendixをご覧ください。

====[column]明示的に空行を入れる方法：親方

Re:viewでは、2行以上の空行は無視されます。改行はbrで入れられるのですが、あとがき部分で著者ごとのコメントを明示的に区切りたい場合に困りました。

暗黙の型宣言さんから、改行　全角スペース　改行とすると、よいよ、というコメントを貰いました。

　

全角スペースのみの段落ができますので、実質的に空行が入ります。なるほどなるほど。

====[/column]


=== Markdown

Markdownは技術者向けの簡易言語です。お手軽かつ、統一フォーマットとしての側面があり、Githubで使えるGFM（Github Fravored Markdown@<fn>{GFM}）が事実上の標準となっています。
//footnote[GFM][@<href>{https://github.github.com/gfm/}]

ブログやドキュメントをMarkdownで書いたり、プレゼンのスライドをMarkdownで作成するなどがよくある使われ方ですが、Markdownでも技術書を執筆できます。

md2review@<fn>{md2review}を使えば、Markdownで書いた本をRe:VIEWを経由して高品質なPDFなどを作成できます。
//footnote[md2review][@<href>{https://github.com/takahashim/md2review}]

また、md2inao@<fn>{md2inao}を使えば、Markdownで書いた文章をInDesignに取り込めるように変換できます。
//footnote[md2inao][@<href>{https://github.com/naoya/md2inao}]


Gitbook@<fn>{gitbook}という、Markdownで執筆できるツールもあります。Re:VIEWほどの高品質ではありませんが、これでも十分同人誌を作成できる品質かつ、Re:VIEWよりは遙かに楽です。
//footnote[gitbook][@<href>{https://github.com/GitbookIO/gitbook}]

=== HTML+CSS

電子書籍のフォーマットとして標準となっているEPub形式ですが、実質HTML+CSSです。頑張ってCSSでうまく装飾すれば、印刷して同人誌にすることもできます。

VivlioStyleという組版システムがあり、最近精力的に活動されているようです。興味ある方はぜひのぞいてみてください。

https://vivliostyle.org/ja/
#@# FIXME: 加筆もとむ

=== reST（Sphinx）

Markdownよりは若干マイナーですがreSTという記述形式があり、Sphinxというツールを使うという手もあります。Sphinx@<fn>{sphinx}はPythonの公式ドキュメントを作るために生まれたものですが、これで同人誌を作成もできます。reST形式についてはreStructuredText入門@<fn>{reST}を読むといいでしょう。
//footnote[sphinx][@<href>{http://docs.sphinx-users.jp/}]
//footnote[reST][@<href>{http://docs.sphinx-users.jp/rest.html}]

=== TeX/LaTex

おっと、TeXも忘れちゃいけません。Re:VIEWはTeXのフロントエンドであり、裏ではTeXが走っていますが、一方で本家TeXはお作法はだいぶ複雑です。情報系、数学系、工学系の人は一度は触ったことがあるかと思いますが…使い慣れないと難しいようです。自由度も高く、数式は確かにきれいに書けますが、これを期にTeXを始めよう、というのはあまりおすすめできません。書き始めたものの、途中でハマってしまい、肝心の執筆が止まってしまうというリスクがあります。

なお、数式を多用する場合、しかも微分積分、あるいは累乗や添字が飛び交うような文章、その他の数学記号が攻めてくるような文章を書く場合は選択肢に入るでしょう。

なお、フロントエンドとして、LyX@<fn>{LyX}を使うというのは良い選択です。TeXのおまじないがかなり軽減されていて、ワープロソフト／DTPソフトとしてかなり使い勝手が良くなります。
//footnote[LyX][@<href>{https://www.lyx.org/WebJa.Home}]

== テキストベースの執筆環境で使うもの

さて、ワープロやDTPソフトウエアを使わない場合、どうやってテキストを執筆すべきでしょうか？

この本ではGithubとRe:Viewを主軸として執筆しています。エンジニアに馴染みやすく多人数での執筆に向いています@<fn>{solo}。技術書典で出展されている同人誌ではよく見られる構成です。まずは執筆環境の概要を説明します。

//footnote[solo][もちろん個人の執筆にも向いています。]

=== バージョン管理システム
GitおよびGitHubを使うと、バージョン管理はとても楽になります。

一人で書く場合も、本書のように複数人で書く場合も、テキストベースの執筆の場合、バージョン管理をすべてGitに任せてしまうのはとても良い選択です。

Gitはエンジニアがもっともよく使っているバージョン管理ツールです。Linux の作者 Linus Benedict Torvald 氏が、Linux の開発に耐える大規模バージョン管理ツールが無いことにブチ切れて開発したものです。Git より以前は Subversion というソフトがよく使われていましたが、圧倒的に git の方が使い勝手がよくあっという間に普及しました。

Gitのことがさっぱりわからないという人は、わかばちゃんと学ぶ Git使い方入門@<fn>{wakaba}をオススメします。
//footnote[wakaba][@<href>{https://www.amazon.co.jp/dp/B071D4D6XX/}]

バージョン管理ツールというのは、おおざっぱにいうとソースコードをタイムマシン的にバックアップして管理するものです。これを履歴といいますが、gitでは履歴の差分を省スペースで保持する仕組みなので、容量を気にせずソースコードの履歴を残せます。

====[column] ファイル管理をシステム化する利点

Windowsを使っていて、@<tt>{スケジュール.backup.バージョン1.最新版.old.txt}のようなファイルを見かけたことはありませんか？ファイルをコピーしてファイル名で履歴管理しようとする陥る罠です。どれが最新なのかわからないという問題があります。では、解決方法として@<tt>{スケジュール.2017-11-11.txt}という命名ルールで縛ろうとしてみます。この場合更新頻度が一日一回におさまればいいですが、同じ日に更新しようとした場合さらにルールが必要になります。たとえば@<tt>{スケジュール.2017-11-11.01.txt}でしょう。ですが、同時に別々の人が更新しようとした場合にはどうなるでしょうか？それに、いちいち人間が手で日付いじるの面倒じゃないですか？

そこでバージョン管理ツールです。たとえばGitでやるのならば、gitに@<tt>{スケジュール.txt}を登録するだけです。コミットという作業をするだけで勝手にソースコード貯蔵庫（リポジトリ）に保管されます。いつの時点の@<tt>{スケジュール.txt}も探し出せます。ログ参照・グラフ参照・検索などさまざまな方法で楽かつ高速で探し出せます。

ファイル名で管理するという原始的なことをする時代ではなくなったのです。

そして Github@<fn>{github} は git を活用した世界最大のソースコード SNS で、エンジニアにとっては名刺代わりといってもいいものです。エンジニアにとっての文化的標準でもあります。たとえば、Markdown と呼ばれる文章の簡易記法は、Github の Markdown（Github Fravored Markdown）が事実上の標準となっていますし、git がエンジニアの標準になったのも、Github の存在がとても大きいのです。
//footnote[github][@<href>{https://github.com/}]

Github は多人数でソースコードを同時開発するのにとても向いている便利なサービスです。別にソースコードといってもプログラミングに限定する必要はありません。本の原稿もソースコードです。そのソースコードを Github に預けるのです。自分の PC が吹っ飛んでも Github にソースコードを置いてる限り悲嘆する必要はありません@<fn>{local-commit}。
//footnote[local-commit][ローカルでの変更点を Github に送ってないときは、もちろん悲しいことになります]
====[/column]

====[column] SNS としての Github

SNS といえば Twitter や Facebook が有名ですが、Github もコミュニケーション機能が豊富です。

issue（イシュー）はそのプロジェクトにおける問題を話合う掲示板のようなものです。issue はよほどのことが無い限り誰でも書けます。ソフトウェアに対するバグ報告・質問が寄せられたり、チーム内での設計議論なんかも行われています。

Pull-Request（PR / プルリク）は Github の一番の特徴ともいえるものです。ある有名な OSS@<fn>{OSS} のプロジェクトがあったとして、あなたがバグを見つけたとします。このとき issue で報告するのも手ですが、あなた自身がバグを直してそれが反映されれば手っ取り早くありませんか？それをするのがプルリクです。いきなりプルリク単体を投げると困惑されるかもしれないので、issue で問題提起しつつ、「ハハハ、こんなバグがあったから直したぜ」と言って一緒にプルリクも投げれば、きっとあなたはヒーローになれるでしょう。
//footnote[OSS][オープンソースソフトウェアの略で、誰でも自由にソースコードを読んだり改変できるソフトウェアです。OSSの登場によって、ソフトウェア開発の世界は一気に書き換わりました。]

他にもプロジェクト用の Wiki や進捗管理ツールなども内包していて、エンジニアにとって Github は手放せないのです。

====[/column]

=== Docker

Docker は、ミニマムなLinux実行環境をコンテナという独立した空間に閉じ込めて実行するものです。Docker について詳しく語り出すとインフラの本一冊書けるので詳しくは説明しませんが、Dockerfile というファイルさえ用意しておけば、Windows でも Mac でも Linux でも、同じ Linux コンテナが動きます。そして幸いなことに Re:VIEW 関連全てがインストールされた Dockerfile が公開されている@<fn>{vvakame}ので、それを使うだけでRe:VIEW環境を構築できます。

//footnote[vvakame][https://github.com/vvakame/docker-review]

DockerはWindows環境だと癖がある、と言われていましたが、昨今大幅に改善しました。またMacやLinux環境なら動かしやすいでしょう。そして、Dockerの利点は、クラウドのサービスで動かしやすいというのもあります。ローカルの環境とクラウドの環境を同一、シームレスにすることも可能です。次に説明するWercerCIはまさにその性質を活用しています。

=== wercker

Re:VIEW で書かれた原稿は PDF や epub などの形式として出力（コンパイル）しないと本にはなりません。インストールさえちゃんとしていれば Re:VIEW のコンパイルは簡単ですが、チームで執筆する場合、それぞれの人の環境に左右されずにコンパイルできる方が楽です。とくにそれは自動化しておきたいものです。GitHub に登録された原稿が自動でコンパイルされて PDF などに変換されていれば最高ですよね。しかもデータの出力だけじゃありません。自動で校正するツールもあります。そういったツールで「この原稿ちょっとマズいんでは？」という指摘を全自動で出すことも簡単です。

自動でコンパイルをするという願いを叶えてくれるのが CI（Continuous Integration@<fn>{CI}）といい、Github と連動してくれる CI のサービスが何種類かあります。自前でサーバーを立てる必要はありません。ユーザー登録して、簡単な設定をするだけです。最近はリポジトリに設定ファイルを1つ追加して、GitHub 連動の設定をするだけというお手軽な CI サービスが主流です。

さて、今回説明するのは Wercker@<fn>{wercker} というサービスです。このサービスは元々スタートアップとしてはじまったもので、後に Oracle@<fn>{Oracle} 社に買収されました。経営している会社はともかくとして、Wercker は使いやすさ、設定の簡単さが売りです。他の CI サービスではオレオレルールを理解しないと使えないものもありますが、Wercker では Docker さえ理解していればほとんどオレオレルールを意識する必要はありません。

//footnote[CI][日本語では継続的インテグレーションといい、自動でコンパイルやユニットテストを走らせるもので、エンジニアの生産性を支えるものです。このジャンルでは Jenkins が有名ですが GUI で設定しなければいけない Jenkins は最近では敬遠される傾向があります。]
//footnote[wercker][@<href>{http://www.wercker.com/}]
//footnote[Oracle][オラクルと聞くとついつい身構える人もいるかもしれませんが、Wercker はとてもよいサービスです。]

他にもCircleCIなど有名なCIサービスはいくつもありますが、Dockerに対応しているサービスが一番望ましいです。さきほども軽く説明したとおり、Re:VIEW の環境整備は Docker があれば簡単なためです。

@<href>{https://app.wercker.com/onestop-techbook/c93-onestop-techbook/runs}は本書の同人版をコンパイルするWercker CIの結果表示ページです。

=== テキストエディタ

テキストエディタ、何を使っていますか？Windowsのメモ帳で頑張ってる強者なひともいらっしゃるかもしれません。Vim や Emacs という昔ながらのエディタもありますが、エンジニアに人気のテキストエディタというと、最近はよりモダンな Atom@<fn>{atom} や Visual Studio Code@<fn>{vscode} があります。

中でもVisual Studio Code（VSCode）は名前の通り Visual Studio なのでテキストエディタというよりは IDE なのですがとても軽量でテキストエディタとしてもとても使い勝手が良く、最近シェアを急激に伸ばしているようです。実際、筆者や本書や別の本も、Re:VIEW プラグインをインストールした VSCode で書いています。筆者が試した限りだと Atom より動作が軽量かつ、JavaScript/TypeScript での IDE としての機能が筆者にとっての必要十分なので、愛用しているエディタです。

Markdown で執筆する場合は、Markdown 専門のツールを使うという手もあります。Windows でも Mac でも最近はいろいろな Markdown 執筆ツールがあるので、それらを利用してみるという手もあります。最近はウェブサービスで Markdown 形式をサポートしているケースも多く、ブログを書いたりするのにも便利です。

//footnote[vscode][@<href>{https://code.visualstudio.com/}]
//footnote[atom][@<href>{https://atom.io/}]

== 環境構築

Re:VIEWを手元で動かすには最低限Rubyが必要になります。そして PDF を出力する場合は LaTeX も必要になります。Mac や Linux だとそれなりにノウハウも多くある程度楽ですが、Windows で環境を整える場合はかなり面倒です。Windows10 の Windows Subsystem for Linux を使えると大分マシです。ただ、どの環境にせよ、LaTeX はとにかく色々と面倒です。Docker を使わずに自前で環境構築をするなら、かなりの調査と研究が必要になるでしょう。

  * Rubyをインストールする（Re:VIEWがRubyで作られているため）
  * PDF変換をするために LaTeX をインストールする
  * Re:VIEWをインストールする

また、本書のリポジトリではJavaScriptが使われているためNode.jsがあるといいでしょう。

=== Dockerをインストールする

Docker for Windows@<fn>{docker-for-windows} や Docker for Mac@<fn>{docker-for-mac}を使うのが手っ取り早いでしょう。
//footnote[docker-for-windows][@<href>{https://www.docker.com/docker-windows}]
//footnote[docker-for-mac][@<href>{https://www.docker.com/docker-mac}]

=== Dockerで動かす

//cmd{
$ docker run --rm -v `pwd`:/work vvakame/review /bin/sh -c "cd /work/articles ; review-pdfmaker config.yml"
//}

@<tt>{/work/articles} という指定はこの本でのディレクトリ構成の物です。

たったこれだけです。なんと簡単なことでしょうか。

=== Macで環境を構築する

基本的にはHomebrew@<fn>{Homebrew}とbrewcaskを活用するといいでしょう。
//footnote[Homebrew][@<href>{https://brew.sh/index_ja.html}]
//footnote[brewcask][@<href>{https://caskroom.github.io/}]

//cmd{
$ brew cask install mactex
//}

あとはRubyは好きな方法でインストールしておくといいでしょう。システムにすでに入っているものを使う、Homebrewでインストールする、rbenvを使う、anyenv+rbenvを使うなどの手段があります。
//footnote[rbenv][@<href>{https://github.com/rbenv/rbenv}]
//footnote[anyenv+rbenv][@<href>{https://github.com/riywo/anyenv}]

=== Windows で環境を構築する

TeXのインストールには、TeXLive@<fn>{TeXLive}を使うのが最近の鉄板のようです。
//footnote[TeXLive][@<href>{https://user.ecc.u-tokyo.ac.jp/users/user-15826/wiki/?TeX/Install}]

Rubyのインストールには、RubyInstaller@<fn>{ruby-installer2}を使うといいようです。
//footnote[ruby-installer2][@<href>{https://github.com/oneclick/rubyinstaller2/releases}]


====[column] 技術書はWordでも書ける

本書はRe:View＋Githubで並行執筆という環境を構築しており、環境構築手順から記事になっているため、それがベスト解とおすすめしていると思われるかもしれません。確かに、差分管理や原稿出力などにおいて素晴らしい面も多々あり、是非オススメしたい環境ではあるのですが、一方でイチから環境設定をすることにハードルを感じることがあるかもしれません。

結論から言ってしまえば、Wordでも普通に本は書けるので、環境構築で挫折しそうになるくらいなら、(Dockerを使ったことのない方、特にWindowsユーザーは)とっととWord等のワープロソフトで書いてしまいましょう。WordはWordで癖があるソフトですが、業務用PC、あるいは家庭用PCにもほぼ標準的にインストールされていることもあり、一度も使ったことがないという人はかなりまれかと思います。ということは、とっかかりの操作方法に悩む必要がないソフトだといえます。また、比較的編集中の見た目と印刷結果が近いので、直感的な執筆には向きます。TeXとか、InDesignとかはお作法がかなり厳しかったり、操作を覚えてまともに書けるようになるまでが結構たいへんです。

書き始めるためのハードルはできるだけ下げて、とにかく最初の本を書き上げることを優先すべきで、その上で「Wordがクソだ！」とおもったら、他の環境を試せばよいのです。いきなり使ったことないツールを使い始めて、そのツールの使い方習得に忙殺され、本が完成しないというのは本末転倒です。執筆ツールはあくまで執筆ツールです。（Text:おやかた）

====[/column]
