#!/bin/bash

git checkout master
git pull
git checkout PCL1.8
git pull
git rebase master
