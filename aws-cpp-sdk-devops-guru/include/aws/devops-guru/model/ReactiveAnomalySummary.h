﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/AnomalySeverity.h>
#include <aws/devops-guru/model/AnomalyStatus.h>
#include <aws/devops-guru/model/AnomalyTimeRange.h>
#include <aws/devops-guru/model/AnomalyReportedTimeRange.h>
#include <aws/devops-guru/model/AnomalySourceDetails.h>
#include <aws/devops-guru/model/ResourceCollection.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Details about a reactive anomaly. This object is returned by
   * <code>DescribeAnomaly.</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ReactiveAnomalySummary">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API ReactiveAnomalySummary
  {
  public:
    ReactiveAnomalySummary();
    ReactiveAnomalySummary(Aws::Utils::Json::JsonView jsonValue);
    ReactiveAnomalySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The severity of the reactive anomaly. </p>
     */
    inline const AnomalySeverity& GetSeverity() const{ return m_severity; }

    /**
     * <p> The severity of the reactive anomaly. </p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p> The severity of the reactive anomaly. </p>
     */
    inline void SetSeverity(const AnomalySeverity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p> The severity of the reactive anomaly. </p>
     */
    inline void SetSeverity(AnomalySeverity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p> The severity of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithSeverity(const AnomalySeverity& value) { SetSeverity(value); return *this;}

    /**
     * <p> The severity of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithSeverity(AnomalySeverity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline const AnomalyStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline void SetStatus(const AnomalyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline void SetStatus(AnomalyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithStatus(const AnomalyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the reactive anomaly. </p>
     */
    inline ReactiveAnomalySummary& WithStatus(AnomalyStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const AnomalyTimeRange& GetAnomalyTimeRange() const{ return m_anomalyTimeRange; }

    
    inline bool AnomalyTimeRangeHasBeenSet() const { return m_anomalyTimeRangeHasBeenSet; }

    
    inline void SetAnomalyTimeRange(const AnomalyTimeRange& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = value; }

    
    inline void SetAnomalyTimeRange(AnomalyTimeRange&& value) { m_anomalyTimeRangeHasBeenSet = true; m_anomalyTimeRange = std::move(value); }

    
    inline ReactiveAnomalySummary& WithAnomalyTimeRange(const AnomalyTimeRange& value) { SetAnomalyTimeRange(value); return *this;}

    
    inline ReactiveAnomalySummary& WithAnomalyTimeRange(AnomalyTimeRange&& value) { SetAnomalyTimeRange(std::move(value)); return *this;}


    /**
     * <p> A <code>AnomalyReportedTimeRange</code> object that specifies the time range
     * between when the anomaly is opened and the time when it is closed. </p>
     */
    inline const AnomalyReportedTimeRange& GetAnomalyReportedTimeRange() const{ return m_anomalyReportedTimeRange; }

    /**
     * <p> A <code>AnomalyReportedTimeRange</code> object that specifies the time range
     * between when the anomaly is opened and the time when it is closed. </p>
     */
    inline bool AnomalyReportedTimeRangeHasBeenSet() const { return m_anomalyReportedTimeRangeHasBeenSet; }

    /**
     * <p> A <code>AnomalyReportedTimeRange</code> object that specifies the time range
     * between when the anomaly is opened and the time when it is closed. </p>
     */
    inline void SetAnomalyReportedTimeRange(const AnomalyReportedTimeRange& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = value; }

    /**
     * <p> A <code>AnomalyReportedTimeRange</code> object that specifies the time range
     * between when the anomaly is opened and the time when it is closed. </p>
     */
    inline void SetAnomalyReportedTimeRange(AnomalyReportedTimeRange&& value) { m_anomalyReportedTimeRangeHasBeenSet = true; m_anomalyReportedTimeRange = std::move(value); }

    /**
     * <p> A <code>AnomalyReportedTimeRange</code> object that specifies the time range
     * between when the anomaly is opened and the time when it is closed. </p>
     */
    inline ReactiveAnomalySummary& WithAnomalyReportedTimeRange(const AnomalyReportedTimeRange& value) { SetAnomalyReportedTimeRange(value); return *this;}

    /**
     * <p> A <code>AnomalyReportedTimeRange</code> object that specifies the time range
     * between when the anomaly is opened and the time when it is closed. </p>
     */
    inline ReactiveAnomalySummary& WithAnomalyReportedTimeRange(AnomalyReportedTimeRange&& value) { SetAnomalyReportedTimeRange(std::move(value)); return *this;}


    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline const AnomalySourceDetails& GetSourceDetails() const{ return m_sourceDetails; }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline bool SourceDetailsHasBeenSet() const { return m_sourceDetailsHasBeenSet; }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline void SetSourceDetails(const AnomalySourceDetails& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = value; }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline void SetSourceDetails(AnomalySourceDetails&& value) { m_sourceDetailsHasBeenSet = true; m_sourceDetails = std::move(value); }

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline ReactiveAnomalySummary& WithSourceDetails(const AnomalySourceDetails& value) { SetSourceDetails(value); return *this;}

    /**
     * <p> Details about the source of the analyzed operational data that triggered the
     * anomaly. The one supported source is Amazon CloudWatch metrics. </p>
     */
    inline ReactiveAnomalySummary& WithSourceDetails(AnomalySourceDetails&& value) { SetSourceDetails(std::move(value)); return *this;}


    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline const Aws::String& GetAssociatedInsightId() const{ return m_associatedInsightId; }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline bool AssociatedInsightIdHasBeenSet() const { return m_associatedInsightIdHasBeenSet; }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline void SetAssociatedInsightId(const Aws::String& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = value; }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline void SetAssociatedInsightId(Aws::String&& value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId = std::move(value); }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline void SetAssociatedInsightId(const char* value) { m_associatedInsightIdHasBeenSet = true; m_associatedInsightId.assign(value); }

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline ReactiveAnomalySummary& WithAssociatedInsightId(const Aws::String& value) { SetAssociatedInsightId(value); return *this;}

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline ReactiveAnomalySummary& WithAssociatedInsightId(Aws::String&& value) { SetAssociatedInsightId(std::move(value)); return *this;}

    /**
     * <p> The ID of the insight that contains this anomaly. An insight is composed of
     * related anomalies. </p>
     */
    inline ReactiveAnomalySummary& WithAssociatedInsightId(const char* value) { SetAssociatedInsightId(value); return *this;}


    
    inline const ResourceCollection& GetResourceCollection() const{ return m_resourceCollection; }

    
    inline bool ResourceCollectionHasBeenSet() const { return m_resourceCollectionHasBeenSet; }

    
    inline void SetResourceCollection(const ResourceCollection& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = value; }

    
    inline void SetResourceCollection(ResourceCollection&& value) { m_resourceCollectionHasBeenSet = true; m_resourceCollection = std::move(value); }

    
    inline ReactiveAnomalySummary& WithResourceCollection(const ResourceCollection& value) { SetResourceCollection(value); return *this;}

    
    inline ReactiveAnomalySummary& WithResourceCollection(ResourceCollection&& value) { SetResourceCollection(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    AnomalySeverity m_severity;
    bool m_severityHasBeenSet;

    AnomalyStatus m_status;
    bool m_statusHasBeenSet;

    AnomalyTimeRange m_anomalyTimeRange;
    bool m_anomalyTimeRangeHasBeenSet;

    AnomalyReportedTimeRange m_anomalyReportedTimeRange;
    bool m_anomalyReportedTimeRangeHasBeenSet;

    AnomalySourceDetails m_sourceDetails;
    bool m_sourceDetailsHasBeenSet;

    Aws::String m_associatedInsightId;
    bool m_associatedInsightIdHasBeenSet;

    ResourceCollection m_resourceCollection;
    bool m_resourceCollectionHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
