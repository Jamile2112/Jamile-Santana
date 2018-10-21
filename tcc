%%
%% Customizações do abnTeX2 (http://abnTeX2.googlecode.com) para a Universidade Federal da Fronteira Sul
%%
%% This work may be distributed and/or modified under the
%% conditions of the LaTeX Project Public License, either version 1.3
%% of this license or (at your option) any later version.
%% The latest version of this license is in
%%   http://www.latex-project.org/lppl.txt
%% and version 1.3 or later is part of all distributions of LaTeX
%% version 2005/12/01 or later.
%%
%% This work has the LPPL maintenance status `maintained'.
%% 
%% The Current Maintainer of this work is Juliano Dorneles dos Santos, juliano.dorneles@gmail.com
%%
%% Further information about abnTeX2 are available on http://abntex2.googlecode.com/
%%

% ---
% INICIO DAS CUSTOMIZACOES PARA A UNIVERSIDADE FEDERAL DA FRONTEIRA SUL
% ---

% alterando a capa
\renewcommand{\imprimircapa}{%
  \begin{capa}%

    \center

    \begin{figure}[htb]
    \begin{center}
    \includegraphics[scale=0.3]{logo_uffs.png}
%    \caption{Exemplo de Figura}\label{exemplo}
    \end{center}
    \end{figure}

    \ABNTEXchapterfont\large UNIVERSIDADE FEDERAL DA FRONTEIRA SUL\\
    CAMPUS DE CERRO LARGO\\
    LETRAS PORTUGUÊS E ESPANHOL –- LICENCIATURA
        
    \vspace*{1cm}
    
    {\ABNTEXchapterfont\large\imprimirautor}

    \vfill
    \ABNTEXchapterfont\bfseries\LARGE\imprimirtitulo
    \vfill
    
    \large\imprimirlocal

    \large\imprimirdata
    
    \vspace*{1cm}
  \end{capa}
}


% folha de rosto 

\makeatletter

\renewcommand{\folhaderostocontent}{
\begin{center}
%{\ABNTEXchapterfont\Large UNIVERSIDADE QUE TORNA OS DOCUMENTOS AINDA MAIS ESTRANHOS}
%    
%    \vspace*{1cm}
    
{\ABNTEXchapterfont\large\imprimirautor}

\vspace*{\fill}\vspace*{\fill}

\begin{center}
\ABNTEXchapterfont\bfseries\Large\imprimirtitulo
\end{center}

\vspace*{\fill}

\abntex@ifnotempty{\imprimirpreambulo}{%
  \hspace{.45\textwidth}
  \begin{minipage}{.5\textwidth}
  \SingleSpacing
  \imprimirpreambulo \\
  \par
  \imprimirorientadorRotulo~\imprimirorientador\par
  \end{minipage}%
  \vspace*{\fill}
}%

%{\large\imprimirorientadorRotulo~\imprimirorientador\par}

%\abntex@ifnotempty{\imprimircoorientador}{%
%  {\large\imprimircoorientadorRotulo~\imprimircoorientador}%
%}%

\vspace*{\fill}

%{\abntex@ifnotempty{\imprimirinstituicao}{\imprimirinstituicao\vspace*{\fill}}}

{\large\imprimirlocal}

\par

{\large\imprimirdata}
\vspace*{1cm}
\end{center}
}

\makeatother

\setlength{\ABNTEXsignwidth}{12cm}

\renewenvironment{dedicatoria}[1][]
{
        \ifthenelse{\equal{#1}{}}{
                \PRIVATEbookmarkthis{\dedicatorianame}
        }{\preamblealchapter{#1}}

        \vspace*{\fill}

    \begin{flushright}
        \hbox{}\vfill
        \begin{minipage}{.5\textwidth}
                                \setlength\parindent{0pt}
                                \setlength\parskip{12pt}
}
{
                \end{minipage}
        \end{flushright}
}

%\renewcommand{\assinatura}{
%% Comando \assinatura for signature
%   % width of the line and text under the line
%\newlength{\ABNTEXsignwidth}
%\setlength{\ABNTEXsignwidth}{12cm}
% ---

% ---
% FIM DAS CUSTOMIZACOES PARA A UNIVERSIDADE XXX
% ---
