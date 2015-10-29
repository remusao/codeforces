
module Main where

import Data.Char
import Control.Monad

isVowel :: Char -> Bool
isVowel 'a' = True
isVowel 'e' = True
isVowel 'i' = True
isVowel 'o' = True
isVowel 'u' = True
isVowel 'y' = True
isVowel _ = False

main :: IO ()
main = do
    string <- getLine
    forM_ string $ \c ->
        let lowered = toLower c in
        if  not (isVowel lowered)
            then putChar '.' >> putChar lowered
            else return ()
    putChar '\n'
