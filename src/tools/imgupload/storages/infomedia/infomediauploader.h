// SPDX-License-Identifier: GPL-3.0-or-later
// SPDX-FileCopyrightText: 2017-2019 Alejandro Sirgo Rica & Contributors

#pragma once

#include "src/tools/imgupload/storages/imguploaderbase.h"
#include <QUrl>
#include <QWidget>
#define INFOMEDIA_API_URL "https://screenshot.infomedia.com/api.php"

class QNetworkReply;
class QNetworkAccessManager;
class QUrl;

class InfomediaUploader : public ImgUploaderBase
{
    Q_OBJECT
public:
    explicit InfomediaUploader(const QPixmap& capture,
                               QWidget* parent = nullptr);
    void deleteImage(const QString& fileName, const QString& deleteToken);

private slots:
    void handleReply(QNetworkReply* reply);

private:
    void upload();

private:
    QNetworkAccessManager* m_NetworkAM;
};
