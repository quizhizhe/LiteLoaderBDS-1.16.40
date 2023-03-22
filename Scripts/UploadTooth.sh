#!/bin/bash

TOOTH_REMOTE_PATH=https://github.com/Tooth-Hub/LiteLoaderBDS-Legacy.git

cd ..
echo [INFO] Fetching LiteLoaderBDS-Legacy Tooth to GitHub ...
git config --global core.autocrlf false
# 获取标签
#now_tag=$(git describe --tags --always | cut -d "-" -f 1)
now_tag=$1

echo NOW_TAG $now_tag

echo [INFO] LiteLoaderBDS-Legacy Tooth Pulling from remote...
echo
git clone ${TOOTH_REMOTE_PATH} Tooth

# cd LiteLoaderBDS-Legacy
# git fetch --all
# git reset --hard origin/Protocol-408
# git checkout Protocol-408
# cd ..

echo
echo [INFO] Fetching LiteLoaderBDS-Legacy Tooth to GitHub finished
echo


# copy all from build/sdk to LiteLoaderSDK
cp -r build/LiteLoaderBDS/* Tooth

cd Tooth
vers="   \"version\": \"${now_tag:1}\","

#modify tooth.json
sed -i "4c\ ${vers}" ./tooth.json


now_status=$(git status . -s)
if [ "$now_status" ]; then
    echo [INFO] Modified files found.
    echo
    git add .
    git commit -m "${now_tag}"
    git tag ${now_tag}

    echo
    echo [INFO] Pushing to origin...
    echo

    git push https://${USERNAME}:${REPO_KEY}@github.com/Tooth-Hub/LiteLoaderBDS-Legacy.git Protocol-408
    git push --tags https://${USERNAME}:${REPO_KEY}@github.com/Tooth-Hub/LiteLoaderBDS-Legacy.git Protocol-408

    cd ..
    echo
    echo [INFO] Upload finished.
    echo
else
    cd ..
    echo
    echo
    echo [INFO] No modified files found.
    echo [INFO] No need to Upgrade LiteLoaderBDS-Legacy.
fi