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



====[column] テキストエディタ：@erukiti

テキストエディタ、何を使っていますか？Windowsのメモ帳で頑張ってる強者なひともいらっしゃるかもしれませんが、エンジニアに人気のテキストエディタというと、Vim や Emacs という昔ながらのエディタもありますが、最近はよりモダンな Atom@<fn>{atom} や Visual Studio Code@<fn>{vscode} があります。

Visual Studio Code（VSCode）は名前の通り Visual Studio なのでテキストエディタというよりは IDE なのですがとても軽量でテキストエディタとしてもとても良いので最近シェアを急激に伸ばしているようです。実際、本書や別の本も、Re:VIEW プラグインをインストールした VSCode で書いています。筆者が試した限りだと Atom より動作が軽量かつ、JavaScript/TypeScript での IDE としての機能が筆者にとっての必要十分なので、愛用しているエディタです。

Markdown で執筆する場合は、Markdown 専門のツールを使うという手もあります。Windows でも Mac でも最近はいろいろな Markdown 執筆ツールがあるので、それらを利用してみるという手もあります。最近はウェブサービスで Markdown 形式をサポートしているケースも多く、ブログを書いたりするのにも便利です。

//footnote[vscode][@<href>{https://code.visualstudio.com/}]
//footnote[atom][@<href>{https://atom.io/}]

====[/column]
