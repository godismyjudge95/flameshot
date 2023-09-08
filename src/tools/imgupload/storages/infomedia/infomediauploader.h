// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#pragma once

#include "src/tools/imgupload/storages/imguploaderbase.h"
#include <QUrl>
#include <QWidget>
#define INFOMEDIA_API_URL "https://images.infomedia.dev/api.php"
#define INFOMEDIA_API_SECRET = "eef6e986-5df0-400b-96a4-d0cc82d016f7"

class QNetworkReply;
class QNetworkAccessManager;
class QUrl;

class InfomediaUploader : public ImgUploaderBase
{
    Q_OBJECT
public:
    explicit InfomediaUploader(const QPixmap& capture, QWidget* parent = nullptr);
    void deleteImage(const QString& fileName, const QString& deleteToken);

private slots:
    void handleReply(QNetworkReply* reply);

private:
    void upload();

private:
    QNetworkAccessManager* m_NetworkAM;
};
