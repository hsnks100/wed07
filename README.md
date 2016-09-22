# wed07


참고자료를 준비하려고 했는데 찾아보니까 너무 내용이 장황해서 ㅜ_ㅜ직접 써봅니다.


## GIT 이란

일단 git 은 변경된 파일을 기록하는 그런 분산 저장소인데 

## 파일의 상태 
파일의 상태는 세가지로 구분 가능합니다.

변경된 상태, 변경이 없는 상태, 변경된 내용을 로컬에 올리고 서버에 올리기 전 상태

변경되지 않은 상태는 뭐 손댈거 없고 

변경 된 상태는 변경된 내용을 commit 을 해야 로컬에 그 변경분이 저장이 됩니다. 그리고 변경분을 실제 서버(github) 에 반영시키기 위해서 push 를 하는거고요.

## GUI TOOL

저 같은 경우엔 git command line 을 쓰고 있지만, 처음엔 git GUI client 를 쓰시는것이 건강에 이롭습니다. 

https://www.sourcetreeapp.com/

에 들어가시면 windows +7 sourcetree 가 있는데 설치하시고 

http://hackersstudy.tistory.com/41 참고하시고 한번 본인의 계정에다가 테스트를 해보시거나 https://github.com/hsnks100/wed07 를 clone 해보세요. 

## GIT-PAGES

### GIT-PAGES 에 앞서

git-pages 써보기에 앞서 branch 에 대해서 조금만 설명해 드리면, git 은 여러가지치기로 동시에 수정된 내용을 commit, pull, push 가 가능합니다.

github 자체에서 문서화 기능을 지원하는데 그 예약된 branch 가 gh-pages 라는 branch 입니다. 제가 이미 gh-pages 는 만들어놓았고요.

쓰시기만 하면 됩니다.

### 써보기 

우리는 git-pages 로 작업하게 되는데요. 지금 wed07 이 프로젝트 이름이고 이 프로젝트의 문서는 wed07 의 gh-pages 브랜치로 checkout 을 합니다.(아마 sourcetree 에 보면 checkout 하는 부분이 있을거에요.)

checkout 하게 되면 git clone/new 하게 되어 생성된 wed07 폴더 안에 


```
▸ _includes/
▸ _layouts/
▸ _plugins/
▸ _posts/
▸ _sass/
▸ css/
▸ images/
▸ javascripts/
▸ js/
▸ stylesheets/
  _config.yml
  Gemfile
  hw0.md
  index.html
  params.json
  README.md
  test.html
  test.md
```

와 같은 폴더 구조를 볼 수 있습니다. 여기서 _posts 에 있는 markdown 파일을 수정하여 commit 하고 push 하면 
[](http://hsnks100.github.com/wed07) 에 들어가셔서 문서를 클릭하면 수정된 내용이 들어가게 됩니다. push 할 때 아이디랑 비번을 요구하는데, 제가 wed07 project page 에서 팀원들 아이디 등록이 
필요합니다. github 아이디 만드셔서 저(hsnks100@pusan.ac.kr) 에게 알려주세요. 

