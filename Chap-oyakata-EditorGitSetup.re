= Git/CI等の設定(編集長作業)

この章では、編集長が執筆開始の前にやっておくとよい、Gitの設定と、CIの設定について述べます。必ずしもこの方法でなくてはならないわけではありませんが、ワンストップ本ということで、一つの方法として承知ください。

== Gitリポジトリの設定
本書もそうですが、できるだけ他の人に声をかけ始める前に環境構築は済ませておきましょう。Blogなどで告知記事を書く、Slack等で相談スペースを作る、書いてくれそうな人に直接声をかける、それらも重要ですが、すぐに執筆にとりかかれるように、企画が決まったら、執筆環境構築は最優先でやりましょう。もう準備はできているから書けという煽り、あるいは初期設定が済んでないなら書き始めるのはあとでという言い訳を許さない、正確にはそれでしぼませないためです。

=== リポジトリはPublicか？Privateか？
まず考える必要があるのは、公開リポジトリでいくのか、プライベートリポジトリでいくのかです。公開リポジトリで行う場合、当然ですが原稿ファイルが全世界に公開されます。見る人が見れば、ダウンロードもできますし、pdfをローカルで作ることも可能です。したがって、「勝手にダウンロードされたくない！」という場合はプライベートリポジトリにしましょう。ただし、GitHubの場合はプライベートリポジトリを作れるOrganizationを作るのは有料になります。月9ドル×人数になるので、(初稿執筆時点。その後、無料プランでもPrivateリポジトリが使えるようになったようです。)ので、ちょっと厳しいかもしれませんね。フリーランスや本業で課金している場合、あるいはほかのGitサービス(GitLab等)を使う場合はPrivateとして、そこに作って関係者を呼ぶという形もいいかもしれません。

一方で、Publicでやる場合にもいくつかメリットがあります。

 * 新規参入者(あるいは参加検討中の人)がさらっと見に来やすい

 どんな感じで進んでいるかがわかります。また、過去のコミット履歴やエラー履歴なども（見る気になれば）見れます。著者陣がこんなところについて相談している、などもわかり役立つこともあるかもしれません。原稿の雰囲気等を見て参加するかどうか考えるという一助になるでしょう。
 
 * 告知にちょっと有利な場合がある 
 
 RTしてくれる人が、「実は本文もGitで公開してる！」と驚きをもって告知してくれることがあります。底本の同人版を発行した直後の事例では、購入者の方が書影をツイートしつつ本を勧めるなかで、「実は本文公開してる!（GitHubのURLは記載なし）」という形でした。
 
 * 売り上げ上の影響は小さいと思われる
 
 本文を無料公開しているということは、売り上げに悪影響を与えるという懸念もあります。しかし、個人的には売り上げ影響はほとんどないと思います。本の存在を知って、買った人でないとGitをわざわざ検索しませんし、タダ見して買わない人は、本を買わないでしょう。後述するように執筆中はCIを設定しておくのが良いですが、原稿完成後にはCIを止める、あるいはCIへのリンクを消す、などはやってもいいかもしれませんね。
 
 * 無料！
 
 GitHubなどへのお布施という側面は否定しませんが、毎月費用かかるのはやだなー、と思うくらいなら、当面は無料で始めて構わないのではないでしょうか。@<fn>{GitHub}

なお、本書をはじめ、OneStopシリーズは、無料のOrganizationを作って、公開のリポジトリでやっています。リポジトリを見ることで得られるものもあるでしょう。

一人執筆であればローカルのGitのみでもよいですが、共同執筆であればどこかに関係者みんながアクセスできるリポジトリを作りましょう。

自分のパソコンが壊れるリスクもありますが、GitHub等に上げておけば、せっかく書いた内容が消えてしまうということもありません。どうしても納得いかなくて消してしまった部分をやっぱり復活させるといったことも可能です。これはPublicかPrivateかという問題とは別の話ですが…

//footnote[GitHub][本稿執筆中に、GitHubの無料アカウントでもプライベートリポジトリを作れることになりました。]

Organizationを作っても、自分のリポジトリにCollaboratorsで入れてもどちらでもOKです。

なお、本書においては、Githubの無料OrganizationのPublicリポジトリを使う前提で話を進めます。

=== GitのOrganizationを作る

プロジェクトが決まったら、まずOrganizationを作ります。先述のようにPublicなOrganizationであれば無料で使用できます。

自分のリポジトリでやってもいいのですが、複数の本を作る場合には、作って損はないかと思います。たくさん公開のリポジトリを持っている人であれば、行き先に迷わないかも、というメリットがあると思います。

左上から、New Organizationを選択します。

//image[01_NewOrganization][Organizationの新規作成][scale=0.5]{
//}

Organizationの名前と、メールアドレスを入力して、最上段のFreeを選択します。すでに使われている名前だと、エラーが出ます。

//image[02_SetupNewOrganization][Organization設定入力][scale=0.5]{
//}

新しいOrganizationができたら、メンバーを招待しますが、アテがなければとりあえず次に進みます。アンケートもスキップしてよいです。答えてもよいですが。

//image[04_SkipInvitation][Invitationはとりあえずスキップ][scale=0.5]{
//}

//image[03_NewOrganizationDone][Organizationができた][scale=0.5]{
//}

自分がPeopleに入っています。新しい人を入れる場合は、Invite Someoneから追加できます。GitHubのIDを聞いて、Invitationを送ります。稀にうまく追加できない場合がありますので、一度Invitationをキャンセルして再度実施という形で繰り返すとできる場合があります。（今までに二人ほど一回でうまく追加できなかった人がいます）

== リポジトリの初期設定をする

次は、本のリポジトリを作って、準備を進めます。以下のように3通りくらいの方法があります。

=== 方法1:フォークする
Gitの既存リポジトリを自分のリポジトリにコピーすることをForkするといいます。誰かが公開しているテンプレートを流用して書き始められます。

これは非常に簡単で、元にしたいリポジトリの右上に、Forkというボタンがありますので、これをクリックするだけです。

//image[GitSet_fork1][フォークのボタン][scale=1.0]{
//}

例として、https://github.com/onestop-techbook/Onestop-JointBook をフォークしてみましょう。この本の原稿リポジトリです。

クリックすると、自分のリポジトリが出てきますので、いったんそのままフォークしてしまいます。

しばらくすると、自分のリポジトリに元のリポジトリと同じファイル一式ができていることでしょう。

次に、これらのテンプレートから、いらないファイルを捨てたり、テンプレートや設定ファイルをいじったりする必要があります。ですが、なんならもともとの原稿をダミー原稿として、PDF出力のテストなどもできます。

Re:VIEWではcatalog.ymlとconfig.ymlを編集します。catalog.ymlは原稿ファイルの一覧、config.ymlは書名、著者、発行サークル名など、その他体裁にかかわる設定ファイルです。

それ以外に、Readme.mdを書き換えます。トップに表示される説明書きなどを書けるファイルです。後述のように、本の概要、締め切りなどの重要事項を記載します。

あとは、「これが原稿リポジトリです、書けたものをPushまたはPull Requestしてください」と告知すれば執筆が開始できます。

=== 方法2:新しいリポジトリを作ってローカルからファイルを格納する（Web完結）

あらかじめ手持ちのテンプレートを使う場合、あるいはダウンロードしたファイルを整形したい場合、あるいはRe:VIEW Starterなどを使う場合のように、一度ローカルを経由して初期設定する方法です。

新しいリポジトリを作ります。そのためにCreate Repositoryをクリックします。名前を適当に入れれば、新しいリポジトリができます。ただし、この時点ではまだなにも入っていない、すっからかんのリポジトリです。

//image[CreateRepository][リポジトリの新規作成][scale=0.5]{
//}
//image[GitSet_NewRepoDone][空のリポジトリができた][scale=0.5]{
//}

次に、本の初期ファイルを作りましょう。一から作ってもよいですが、既存のファイルをCloneしてきた方が早いし確実です。

まず、もとにするRe:VIEWのファイルを探してきます。Clone or Downloadボタン>Download ZIPとし、いったんローカルに保存します。例えば、この本のリポジトリをダウンロードしましょう。

https://github.com/onestop-techbook/Onestop-JointBook

//image[GitSet_CloneOtherRepository][他のリポジトリからのクローン][scale=0.5]{
//}

これを解凍し、先ほど作った空のリポジトリに格納します。Quick setup内にuploading an existing fileとありますので、ここをクリックして、アップロード画面に移動します。解凍したファイルをファイルマネージャのような画面にドラッグするなどして、当該リポジトリにファイルをアップロードします。

//image[GitSet_FileUploader][ファイルアップローダーでのファイルアップロード][scale=0.5]{
//}

//image[GitSet_CommitviaWeb][Webからの初期設定コミット][scale=0.5]{
//}

アップロードが終わったら、一番下にある、緑のボタン(Commit changes)をクリックします。今後これらのファイルを書き換えていくので、マスターにして構いませんから、Commitします。1－2分ほどで、リポジトリのトップに遷移し、ファイルがコピーされ、トップの説明文(ReadMe)が更新されていることが確認できるでしょう。

=== 方法3:新しいリポジトリを作ってローカルからファイルを格納する（コマンドライン）

さきほどの方法2をコマンドラインで初期設定する方法です。Gitをローカルにインストール、初期設定をします。Windowsの場合はGit for Windows@<fn>{git_for_windows}をインストールしてください。macOSの場合はXcodeをインストールするとApple Gitというのが一緒にインストールされます
。
//footnote[git_for_windows][https://gitforwindows.org/]

インストールしたらターミナルソフトを起動します。WindowsはコマンドプロンプトもしくはPowershell、macOSの場合はターミナルアプリを起動してください。ターミナルソフトで次のようなコマンドを入力してユーザー名とメールアドレスの初期設定をします。「ユーザー名」、「メールアドレス」は各々置き換えてください。

//cmd{
$ git config --global user.name "ユーザー名"
$ git config --global user.email メールアドレス
//}

新しいリポジトリを作るところまでは方法2と同じです。リポジトリを作ったら、ターミナルソフトから手持ちのテンプレートもしくはダウンロードしたファイルがあるフォルダまで移動して次のコマンドを入力します。

//cmd{
$ git init
$ git add -A
$ git commit -m "first commit"
$ git branch -M main
$ git remote add origin https://github.com/ユーザー名/リポジトリ名.git
$ git push -u origin main
//}

Git for Windowsを使っている場合、最後のgit pushでGitHubへの認証を求められるのでログインして認証してください。

====[column] Re:VIEW Starterを使う

大変使いやすいRe:VIEWのテンプレートがあるのでお勧めです。

カウプラン極東機関さんが提供しているRe:VIEW Starterです。

https://kauplan.org/reviewstarter/

チェックを入れていくだけで、テンプレートファイル(zip)をダウンロードできます。

ダウンロードして原稿リポジトリに放り込みます。

コマンドラインからの格納の仕方はダウンロードページに書いてありますし、いったんローカルに保存したのち、方法2に従って手動でアップロードしてもよいでしょう。

丁寧な説明が書かれていますし、Re:VIEWの不親切な部分もかなり軽減されています。

====[/column]



== CIの設定をする

PDFは参加者全員が同じ環境で作ったpdfが確認できる方が良いですよね？Windowsで書いている人、Mac上で書いている人、WordやMarkdownなどで書いている人、いろいろいますが、今回は最終的にRe:VIEWにコンバートすることを一旦の前提とします。ローカル環境を作っている人ばかりではありませんし、ローカル環境はそれぞれの人で異なります。Dockerで、なんていう話もありますが、新しく環境構築するのはたいへんです@<fn>{docker}。

//footnote[docker][著者・寄稿者がやりたいのは執筆であり、Dockerの構築ではありません。特にWindowsではDockerローカル環境を作るだけでも結構大変だったりしますよね。仮想環境をすでに持っている、勉強兼ねてやってみるということであればそれ自体は良いことですが、初めて本を書こうとしている人に、「GithubのID作りましたね？じゃあ次にDocker環境作りましょう。」というのは本末転倒が過ぎるでしょう。そもそも、覚えるものが増えます。さくっとインストールできればいいのですが、ハマったときに時間がどんどん溶けていきます。なのに、肝心の原稿は1行も増えません。]

さらに言えば、pdf生成は自動でできるに越したことはありません。いちいちコマンドラインからpdf生成命令を出さないとpdfができないなど、面倒の極みです。

そこでCIの出番になります。クラウドの仮想環境、とでも思っておけばよいでしょうか。(相当語弊はあるかと思いますが、とりあえず私はそう理解しています)

CIとしては、WerckerCIを前提に話を進めます。

https://app.wercker.com/にアクセスし、IDを作りましょう。GitIDでも連携IDを作れるので、それで十分でしょう。

//image[CI_NewWercker][WerckerCIを新しく追加する]

次に、左上のAdd applicationをクリックします。Create new Applicationというページに遷移しますので、上段のプルダウンから自分のIDを選び、下はGitHubを選び、次に行きます。

//image[CI_WerckerCINewApp][WerckerCIの初期設定画面][scale=0.5]{
//}

//image[CI_SelectRepository][対象リポジトリの選択][scale=0.5]{
//}

検索窓にOrganizationを入力すると、候補になるリポジトリが表示されますから、今回の対象になるリポジトリ（今回はOnestop-JointBook:この本）を指定し、次に行きます。

//image[CI_SSH][SSHの設定：デフォルトでよい][scale=0.5]{
//}

SSHの設定は、Recommended for public projectsとあるので、上のSSHアクセスを選択します。

//image[CI_AppPublic][最終確認画面:アプリのPublic設定を忘れないように][scale=0.5]{
//}

最終確認画面に来ましたが、ここで忘れないようにしたいのが、「Make my app public」のチェックです。これをチェックしておかないと、ほかの参加者（=執筆者）がCIで生成されたpdfを見れません。

//image[CI_setupFinish][WerckerCIの設定完了][scale=0.5]{
//}

これで、CIの設定が終わりました。トップ画面が出ましたよね？設定ファイルの中に、Wercker.ymlがあり、リポジトリが更新されるとアプリが走り、PDFが生成されます。この本のリポジトリをCloneしていればなんらか存在するので、Wercker.ymlが存在するので、特にいじる必要はありません。

一度何かのファイルをPushするなり、更新するなりして、CIのテストをしておきましょう。CIが走り始め、1分ほどでpdfが生成されるはずです。試行錯誤の段階ではその時間は多少ストレスになりますが、執筆者全員が同じ環境で出力されたpdfを随時確認できるというメリットは大きいです。ローカル環境設定などに煩わされることもないですしね。

//image[CI_Working][Wercker動作開始][scale=0.5]{
//}

何かエラーが出ると、エラー表示が出ます。エラーが出た場合、そのタブを展開し、エラー内容の確認、修正を行います。

//image[CI_Error1][Werckerにエラーが出たとき][scale=0.5]{
//}
//image[CI_Error2][エラーが出たところを展開][scale=0.5]{
//}

なお、WerckerCIのせいではなく、おもにRe:VIEWのせいですが、そのエラーはかなり不親切なので、Re:VIEWに慣れるまで、あるいは慣れてもその原因追及は大変かもしれません。頑張りましょう。時には二分探索で原因切り分けをすることもあります。その時、Gitのコミットログ/Diffが役に立つでしょう。

CIのコンテナのロード、コンパイル、そのあとのダウンロードなど、CIでやるとなかなかに時間がかかることは事実ですから、ローカルでコンパイルできる環境を作ることをかならずしも否定するものではありません。繰り返しになりますが、すでに環境構築済な方、また勉強兼ねてやってみよう、という方のやってみようという気持ちを否定するものではありません。

=== リポジトリの説明書(ReadMe.MD)を更新する
ここは、リポジトリのトップ画面で、一番目に付くところです。ここには必要事項の中でも特に重要なものを書きましょう。

 * 本の目的・概要
 * スケジュール
 * 執筆上の注意　他

//list[ReadMe][Readmeの記載例]{
@<b>{ワンストップ　合同誌を書こう概要説明}
@<b>{この本の目的}

合同誌はいいぞ。 会社やコミュニティで合同誌を作りたい、と思ったことありませんか？
考えたこともない？では、書きましょう。作りましょう。
合同誌とすることで、執筆の敷居を思いっきり低くすることができます。 以下に合同誌のメリットを述べます。

1.みんなの知見を持ち寄って、一冊の本が作れる。 

自分一人では書けない、広い内容をカバーする本が作れます。

2.執筆のハードルが低い 
10Pなら？→10Pならなんとかなるかなー。わかります。 
では、10ページ書く人が3人いたら？　30ページの本ができますね。 

@<b>{デメリット}
編集長は少し大変ですね。 著者、原稿集め、スケジュール管理、編集作業、印刷費は誰が持つ？など。
でも、合同誌だからできることもあります。もっとカジュアルに本をはやしませんか？ 
ということで、合同誌に特化した「ワンストップ合同誌を作ろう」の企画をスタートします。 
合同誌のメリット、デメリット、原稿募集・告知、執筆ノウハウ、編集ノウハウ、打ち上げやお礼の方法、
権利関係の扱い、実際に発行してみての感想など。
こういったノウハウを集めた本を作りたいのです。

@<b>{執筆・配布スケジュール}

募集開始・環境構築　12月16日
章目次確定：1月末日
本文初稿：2月末
レビュー＆追記：3月15日
入稿:3月20日 発行　技術書典(詳細日程、募集開始はまだですが) を
大枠なスケジュールとします。(多少前後します)

@<b>{著者紹介兼あとがき}
Contributers.re内に、テンプレートに従って記入ください。

@<b>{執筆にあたってのお願い}
CIでコンパイルが通ることを確認してください。エラーのまま放置はなるべくやめてください。
Confrictが発生した場合は、各自解決お願いします。
push -f等はやめましょう。（歴史を書き換えてはいけません。
相談事： Issue立ててください。
雑談、ざっくばらんな相談については、Slackがあります。(Slack URL) 
参加方法は、親方まで。https://twitter.com/oyakata2438/

@<b>{Re:VIEWの書き方}
Re:VIEWチートシート を参考にしてみてください。

@<b>{CI}
https://app.wercker.com/oyakata2438/Onestop-JointBook/runs でPDFが書きだされます。
一番上のBuildをクリックすると展開されるので、 Output Artifactをクリックして、
Download artifactをクリックすると、 tarで固めたpdfがダウンロードできます。
//}

これは例ですが、いろいろ書いておくと、参加者が迷わないかと思います。

== 著者・記事募集の告知記事を書く・ツイートする

環境設定をしたら、いよいよ執筆開始です。自分で書けるところは書き始めましょう。

今回のプロジェクトは合同誌ですから、ほかの執筆者を集める必要があります。Twitterで呼びかける、勉強会などで声をかける、既知のツテを頼って原稿依頼を行う、などで執筆者を集めます。著者にも都合・予定がありますから、できるだけ早く募集を開始し、早めに著者を集めましょう。締め切りはすぐにやってきます。締切までに原稿が揃わないと、当然本は落ちます。発行できません。悲しいことになります。

== まとめ

本章では、編集長の最初のお仕事である執筆環境構築として、この本でも実際に使っている、Re：VIEW+Git+CIの環境構築について述べました。環境構築は時間と手間を掛けるところではありませんので、さっくり終わらせ、執筆と編集に注力しましょう。

この環境構築は、広く著者募集の告知を始める前にやっておくほうが良い内容です。企画をたてたら真っ先にやりましょう。