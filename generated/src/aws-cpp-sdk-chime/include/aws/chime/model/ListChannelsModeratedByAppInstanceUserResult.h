﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ChannelModeratedByAppInstanceUserSummary.h>
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
namespace Chime
{
namespace Model
{
  class ListChannelsModeratedByAppInstanceUserResult
  {
  public:
    AWS_CHIME_API ListChannelsModeratedByAppInstanceUserResult();
    AWS_CHIME_API ListChannelsModeratedByAppInstanceUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListChannelsModeratedByAppInstanceUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The moderated channels in the request.</p>
     */
    inline const Aws::Vector<ChannelModeratedByAppInstanceUserSummary>& GetChannels() const{ return m_channels; }

    /**
     * <p>The moderated channels in the request.</p>
     */
    inline void SetChannels(const Aws::Vector<ChannelModeratedByAppInstanceUserSummary>& value) { m_channels = value; }

    /**
     * <p>The moderated channels in the request.</p>
     */
    inline void SetChannels(Aws::Vector<ChannelModeratedByAppInstanceUserSummary>&& value) { m_channels = std::move(value); }

    /**
     * <p>The moderated channels in the request.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& WithChannels(const Aws::Vector<ChannelModeratedByAppInstanceUserSummary>& value) { SetChannels(value); return *this;}

    /**
     * <p>The moderated channels in the request.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& WithChannels(Aws::Vector<ChannelModeratedByAppInstanceUserSummary>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The moderated channels in the request.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& AddChannels(const ChannelModeratedByAppInstanceUserSummary& value) { m_channels.push_back(value); return *this; }

    /**
     * <p>The moderated channels in the request.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& AddChannels(ChannelModeratedByAppInstanceUserSummary&& value) { m_channels.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListChannelsModeratedByAppInstanceUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListChannelsModeratedByAppInstanceUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListChannelsModeratedByAppInstanceUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ChannelModeratedByAppInstanceUserSummary> m_channels;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
