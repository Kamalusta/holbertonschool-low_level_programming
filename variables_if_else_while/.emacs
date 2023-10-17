(setq-default tab-width 4)                     
(setq-default indent-tabs-mode t)                             
(mapcar (lambda (hooksym)                           
          (add-hook hooksym                        
                    (lambda ()
                      (kill-local-variable 'indent-tabs-mode)
                      (kill-local-variable 'tab-width)
                      (local-set-key (kbd "TAB") 'self-insert-command))))
        '(                         
          c-mode-common-hook        
          ))                                 
