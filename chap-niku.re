= 原稿を進める実運用

== 肉肉野菜肉野菜ご飯

合同誌の書き方の一つのメソッドとして、@<b>{肉肉野菜肉野菜ご飯}があります。ネタ出しに困ったときの一つの指針として取り上げます。

実際の技術系雑誌、電子工作やWeb Design系でも、DOS/V系の本でもMacの本でもなんでも構いません。技術系の雑誌を一度見てみてください。肉肉野菜肉野菜ご飯という観点で見ると、納得できる例があるとおもいます。

=== 肉

特集記事です。表紙にあおりでタイトルが出るクラスの、この本の特集を@<b>{肉}と定義します。

肉が2～3本あると、その合同誌のメインを張れて、屋台骨ができます。逆に言うと、ここで肉を設定できないと、単なるごった煮本になってしまいます。著者を探す場合には、ここの著者をまず探すと良いでしょう。

肉には、今ホットなトピックス、あるいは編集長が一番書きたい・取り上げたいネタを持ってくることが望ましいです。これがこの本の（今回の）メインテーマです！と自信を持って言えるネタを探しましょう。

=== 野菜

箸休めな記事です。肉の内容とは異なるけれど、骨太な記事があると良いです。広く募集をかける合同誌では特にここを充実させることで、本の厚みと内容の厚みを確保できます。

雑誌においては、連載記事でもあります。

=== ご飯

単発コラムあるいは初めての人向けの軽い記事などです。軽くていいですし、毛色の違う記事でも良いです。ご飯で締めるというわけではありませんが、ごはんは必要です。ですがごはんや野菜ばかりでは定食=合同誌は成立しません。何事もバランスよく。

== GitHubでの執筆の管理（Push/Pull Request）について

Gitで原稿を管理してまとめていく場合に悩ましいのは、Mainブランチへの直接のPushを可とするのか、です。編集長以外が直接原稿を修正できるようにするのか、という点です。権限にも関わってきますが、合同誌においては、原則直接Push/あるいはPull Requestのセルフマージを可とする、むしろ積極的に推奨するというスタンスで良いと考えます。

 * こまめなPush/PRを推奨します。
 * MainブランチへのPush、プルリクのセルフマージを推奨します。
 * CIのエラーは、できるだけ本人で直してください。（わからなければ編集長まで）

この3つの注意書きを募集要項に書いておけばよいでしょう。

また、Organizationのメンバーにユーザーを追加し、追加できたら権限/動作チェックを早めにやってもらうようにしましょう。

著者が直接Push、プルリクをセルフマージすることのメリットを次に列挙します。

また、編集長の立場であれば、プルリクが上がったら、コンフリクトだけチェックしてサクッとマージしてしまいます。ノールックマージ。Githubのプルリク画面で、コンフリクトの有無、CIエラーの有無が確認できますから、両方エラーがなければサクッとマージしてしまいましょう。これは著者のセルフマージと同じ効果が得られます。

=== 編集長の負荷が減る

編集長が確認してからマージするという方式にした場合、当然ながら編集長が確認しないことには原稿がマージされません。編集長がいつでも確認できるわけではありませんし、各ブランチまで見に行かないですよね。そういう意味で、原稿の遊び時間が増えてしまいます。常時マージされていれば、それぞれの著者のワークフォルダにも最新原稿が届くようになります。最新原稿にアクセスしづらいと、コンフリクトのリスクは一気に上昇します。

編集長がボトルネックになるようなことは避けておいたほうがいいでしょう。

=== (見えない)エラー混入は気にしなくてよい

原稿ファイルであれば、ソフトウエアと異なり「予期せぬ挙動・バグ」が混入するという可能性はほとんどありません。CIを走らせていれば、Re:VIEW構文のミスなどはCIで見つけてもらえます。具体的には、CIでのコンパイル中にエラーが出る、表示がずれる、章のネストが変、章目次が効いてない、等です。これらのエラーは、原則Pushした著者が直すように、と明記・周知すると良いでしょう。Re:VIEWは（あるいはTeXは）エラーがとにかく分かりづらいので、それらと戦う必要は出ますが、できるだけ著者が直し、難しければ編集長がヘルプするという体制を整えておけると、途中の進捗管理は相当楽になるでしょう。とにかく各人、自分の原稿の執筆に注力します。

一方で、逆説的ですが、原因がわからないエラーは、できるだけ編集長の方で対応できるとBetterです。執筆者は、原稿を書くことに集中して欲しいのです。細々としたエラー対応、バグ取りに忙殺され原稿本体の進捗が悪くなる、原稿が落ちるのは本末転倒はなはだしいのはいうまでもないことでしょう。

幸いGitHubなどで原稿を管理していれば、「どこがまずかったのか」はあとから確認することができます。二分探索なども可能ですので、バグをつぶしていきましょう。Slackなどでフィードバックしてもいいですね。

=== コンフリクトの可能性が減る
同じファイルを別々に編集し、合体させようとしたときに変更箇所が競合し自動でマージできない状態をコンフリクトといいますが、Push/PRマージが自分でできることで、リモートのMasterブランチを常に最新にすることができます。プルリクが溜まってMasterはいつまでも更新されないといった状況を回避することで、コンフリクトの可能性が減ります。

こうしておけば、コンフリクトの自体も減りますし、発生したとして修正も容易になります。

合同誌においてコンフリクトが発生しやすい場所は、各章のファイルではなく、Catalog.ymlかContributionsになる場合が多いです。しかも、追加しようとしたらコンフリクトした、というシチュエーションが多いと想定します。

コンフリクトも直すのは著者か編集長になろうかと思いますが、大抵の場合は「両方を生かす」という編集をすれば良いことになります。

プルリクでコンフリクトのチェックをし、必要であれば直し、自分でマージする。

このループを適切に回すことができれば、一晩寝て起きたら原稿が30ページ増えているという奇跡体験を目のあたりにできる可能性があるでしょう。

=== 直接マージ/Pushを可能とした場合のデメリット
これは、コンパイルエラーの原因追及などにおいて、「履歴がわかりづらくなる」という点が挙げられます。

慣れていない人が試行錯誤して樹形図が複雑になると本来の原因がわかりづらくなります。CIでチェックしていたたとしても、そのエラーメッセージはかなりわかりづらい@<fn>{texerror}です。何度かトライしてうまくいかないときは、早めに編集長にヘルプをお願いしましょう。


//footnote[texerror][吐き出されるログのほとんどはこんなパッケージを読み込みましたのメッセージだったりします。そこに埋もれてしまって、どこにエラーがあるのかが非常に分かりづらいです。また、そのエラーを示す内容も非常に分かりづらいです。闇が深くなるので、ここではこれ以上は触れませんが・・・]

また、コミットはこまめにしましょう。コミット回数が増えることを嫌がってはいけません。小刻みなコミットを重ねることで、全体に進捗が見えやすくなります。

編集長から「進捗どうですか」と言わなくて/言われなくて済む以外に、重複を回避できる、他のひとにプレッシャーをかけられるなどのメリットがあります。

さらに、どこかでエラーが出たときにそのエラーの絞り込みが簡単になります。ソフト開発者ならわかりますよね？

また、Gitに不慣れな人が直接リポジトリを操作すること、逆になれた人が「高尚な手段を使って」、操作ミスなどによりリポジトリのデータ破損等を生じさせることがあります。例えば、リベースのような過去を書き換えるような行為は危険性が一気に高まります。コミット履歴がきれいであるなど、執筆原稿管理においては何のメリットもありません。試行錯誤があってよいのです。

== Slack等のベース基地を準備する
原稿を進めるにあたって、SlackやDiscordなどのツールを使って、雑談含めて会話できる場所を作っておきましょう。執筆に関する相談、ネタの相談、誤字修正のフィードバックなど、何かと便利に使えます。


上手く定着すればそれ自体がコミュニティになり、次の本や次の企画が生まれることもあるでしょう。

== まとめ

執筆を進めるうえでの小ネタ的なネタを記載しました。ネタ出しの鉄板メソッド、肉肉野菜肉野菜ご飯、そしてこまめなコミット、MasterへのPushやセルフマージを推奨するのがよい。全員が楽になる方法ですから、やってみてはいかがでしょう？