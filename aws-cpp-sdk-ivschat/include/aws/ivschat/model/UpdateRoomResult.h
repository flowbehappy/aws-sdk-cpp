﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivschat/model/MessageReviewHandler.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ivschat
{
namespace Model
{
  class AWS_IVSCHAT_API UpdateRoomResult
  {
  public:
    UpdateRoomResult();
    UpdateRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline UpdateRoomResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline UpdateRoomResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Room ARN, from the request (if <code>identifier</code> was an ARN).</p>
     */
    inline UpdateRoomResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline UpdateRoomResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Time when the room was created. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline UpdateRoomResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline UpdateRoomResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline UpdateRoomResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Room ID, generated by the system. This is a relative identifier, the part of
     * the ARN that uniquely identifies the room.</p>
     */
    inline UpdateRoomResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline const Aws::Vector<Aws::String>& GetLoggingConfigurationIdentifiers() const{ return m_loggingConfigurationIdentifiers; }

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline void SetLoggingConfigurationIdentifiers(const Aws::Vector<Aws::String>& value) { m_loggingConfigurationIdentifiers = value; }

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline void SetLoggingConfigurationIdentifiers(Aws::Vector<Aws::String>&& value) { m_loggingConfigurationIdentifiers = std::move(value); }

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline UpdateRoomResult& WithLoggingConfigurationIdentifiers(const Aws::Vector<Aws::String>& value) { SetLoggingConfigurationIdentifiers(value); return *this;}

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline UpdateRoomResult& WithLoggingConfigurationIdentifiers(Aws::Vector<Aws::String>&& value) { SetLoggingConfigurationIdentifiers(std::move(value)); return *this;}

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline UpdateRoomResult& AddLoggingConfigurationIdentifiers(const Aws::String& value) { m_loggingConfigurationIdentifiers.push_back(value); return *this; }

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline UpdateRoomResult& AddLoggingConfigurationIdentifiers(Aws::String&& value) { m_loggingConfigurationIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>Array of logging configurations attached to the room, from the request (if
     * specified).</p>
     */
    inline UpdateRoomResult& AddLoggingConfigurationIdentifiers(const char* value) { m_loggingConfigurationIdentifiers.push_back(value); return *this; }


    /**
     * <p>Maximum number of characters in a single message, from the request (if
     * specified).</p>
     */
    inline int GetMaximumMessageLength() const{ return m_maximumMessageLength; }

    /**
     * <p>Maximum number of characters in a single message, from the request (if
     * specified).</p>
     */
    inline void SetMaximumMessageLength(int value) { m_maximumMessageLength = value; }

    /**
     * <p>Maximum number of characters in a single message, from the request (if
     * specified).</p>
     */
    inline UpdateRoomResult& WithMaximumMessageLength(int value) { SetMaximumMessageLength(value); return *this;}


    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients), from the request (if specified).</p>
     */
    inline int GetMaximumMessageRatePerSecond() const{ return m_maximumMessageRatePerSecond; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients), from the request (if specified).</p>
     */
    inline void SetMaximumMessageRatePerSecond(int value) { m_maximumMessageRatePerSecond = value; }

    /**
     * <p>Maximum number of messages per second that can be sent to the room (by all
     * clients), from the request (if specified).</p>
     */
    inline UpdateRoomResult& WithMaximumMessageRatePerSecond(int value) { SetMaximumMessageRatePerSecond(value); return *this;}


    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline const MessageReviewHandler& GetMessageReviewHandler() const{ return m_messageReviewHandler; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline void SetMessageReviewHandler(const MessageReviewHandler& value) { m_messageReviewHandler = value; }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline void SetMessageReviewHandler(MessageReviewHandler&& value) { m_messageReviewHandler = std::move(value); }

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline UpdateRoomResult& WithMessageReviewHandler(const MessageReviewHandler& value) { SetMessageReviewHandler(value); return *this;}

    /**
     * <p>Configuration information for optional review of messages.</p>
     */
    inline UpdateRoomResult& WithMessageReviewHandler(MessageReviewHandler&& value) { SetMessageReviewHandler(std::move(value)); return *this;}


    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline UpdateRoomResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline UpdateRoomResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Room name, from the request (if specified).</p>
     */
    inline UpdateRoomResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags attached to the resource. Array of maps, each of the form
     * <code>string:string (key:value)</code>.</p>
     */
    inline UpdateRoomResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline UpdateRoomResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>Time of the room’s last update. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline UpdateRoomResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createTime;

    Aws::String m_id;

    Aws::Vector<Aws::String> m_loggingConfigurationIdentifiers;

    int m_maximumMessageLength;

    int m_maximumMessageRatePerSecond;

    MessageReviewHandler m_messageReviewHandler;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
