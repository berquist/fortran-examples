function fpow(xbase, xexponent) result(y)
  real*8, intent(in) :: xbase
  real*8, intent(in) :: xexponent
  real*8 :: y

  y = xbase ** xexponent
end function fpow
