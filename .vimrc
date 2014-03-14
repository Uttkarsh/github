"Sacred do not touch
set bg=dark
set showmatch
set hidden
set tabstop=8
set expandtab
set shiftwidth=8
set softtabstop=8
set listchars=tab:>-,eol:$,trail:^

"Custom edits begin here
execute pathogen#infect()
syntax on
filetype plugin indent on
""set mouse=a
set incsearch
set autowrite "Save on losing focus for ctags
set hlsearch
map <Space> /
map a i

" Uncomment the following to have Vim jump to the last position when reopening a file
if has("autocmd")
  au BufReadPost * if line("'\"") > 0 && line("'\"") <= line("$")
    \| exe "normal! g'\"" | endif
endif
let g:plantuml_executable_script='java -jar /home/utkarsh/plantumleditor/plantuml.jar'

:command WQ wq
:command Wq wq
:command W w
:command Q q

"if &diff
"        highlight DiffAdd    cterm=bold ctermfg=10 ctermbg=17 gui=none guifg=bg guibg=Red
"        highlight DiffDelete cterm=bold ctermfg=10 ctermbg=17 gui=none guifg=bg guibg=Red
"        highlight DiffChange cterm=bold ctermfg=10 ctermbg=17 gui=none guifg=bg guibg=Red
"        highlight DiffText   cterm=bold ctermfg=10 ctermbg=88 gui=none guifg=bg guibg=Red
"endif
