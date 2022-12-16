set nu

" this allows separate vimrc-s for subfolders
" to use it copy the file to the intended folder,
" uncomment the next two lines and comment the block for tabs
set exrc
set secure

" this is for copy-pasting buttons, to use them install vim-gtk
inoremap <C-v> <ESC>"+pa
vnoremap <C-c> "+y
vnoremap <C-d> "+d

"-------------------------------------------------------
" this section is for C

filetype plugin indent on

" this block is for replacing tabs with 4 spaces
" filetype plugin indent on -- already have it in the beginning
" show existing tab with 4 spaces width
set tabstop=4
" when indenting with '>', use 4 spaces width
set shiftwidth=4
" On pressing tab, insert 4 spaces
set expandtab
