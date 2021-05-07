# run `make vignettes && make clean` before `R CMD build ...`

vignettes: vignettes/article.Rtex vignettes/article2.Rtex

vignettes/article-original.Rnw: article.Rnw
	cp article.Rnw vignettes/article-original.Rnw

vignettes/article-Sweave.Rtex: vignettes/article-original.Rnw
	R -e 'knitr::knit("vignettes/article-original.Rnw")'
	mv article-original.tex vignettes/article-original.tex
	mv vignettes/article-original.tex vignettes/article-Sweave.Rtex
	mv Figures vignettes/Figures

vignettes/article.Rtex: vignettes/article-knitr.Rtex
	cp vignettes/article-knitr.Rtex vignettes/article.Rtex

vignettes/article-knitr.Rtex: vignettes/article-Sweave.Rtex
	R -e 'knitr::Sweave2knitr("vignettes/article-Sweave.Rtex")'
	mv vignettes/article-Sweave-knitr.Rtex vignettes/article-knitr.Rtex

vignettes/article2-original.Rnw: article2.Rnw
	cp article2.Rnw vignettes/article2-original.Rnw

vignettes/article2-Sweave.Rtex: vignettes/article2-original.Rnw
	R -e 'knitr::knit("vignettes/article2-original.Rnw")'
	mv article2-original.tex vignettes/article2-original.tex
	mv vignettes/article2-original.tex vignettes/article2-Sweave.Rtex
	mv Figures vignettes/Figures

vignettes/article2.Rtex: vignettes/article2-knitr.Rtex
	cp vignettes/article2-knitr.Rtex vignettes/article2.Rtex

vignettes/article2-knitr.Rtex: vignettes/article2-Sweave.Rtex
	R -e 'knitr::Sweave2knitr("vignettes/article2-Sweave.Rtex")'
	mv vignettes/article2-Sweave-knitr.Rtex vignettes/article2-knitr.Rtex

clean:
	rm \
		vignettes/article-original.Rnw \
		vignettes/article-knitr.Rtex \
		vignettes/article-Sweave.Rtex
		vignettes/article2-original.Rnw \
		vignettes/article2-knitr.Rtex \
		vignettes/article2-Sweave.Rtex

distclean:
	rm \
		vignettes/article-original.Rnw \
		vignettes/article-knitr.Rtex \
		vignettes/article-Sweave.Rtex \
		vignettes/article.Rtex
		vignettes/article2-original.Rnw \
		vignettes/article2-knitr.Rtex \
		vignettes/article2-Sweave.Rtex \
		vignettes/article2.Rtex

