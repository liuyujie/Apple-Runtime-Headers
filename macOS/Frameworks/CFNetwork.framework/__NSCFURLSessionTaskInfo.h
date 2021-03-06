//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSError, NSString, NSURL, NSURLRequest, NSURLResponse, NSURLSessionTaskMetrics;

@interface __NSCFURLSessionTaskInfo : NSObject <NSSecureCoding>
{
    BOOL _resumedAndWaitingForEarliestBeginDate;
    BOOL _respondedToWillBeginDelayedRequestCallback;
    BOOL _hasStarted;
    BOOL _expectingResumeCallback;
    BOOL _establishedConnection;
    BOOL _disablesRetry;
    BOOL _shouldCancelOnDisconnect;
    BOOL _discretionary;
    BOOL _mayBeDemotedToDiscretionary;
    BOOL __hasSZExtractor;
    BOOL __doesSZExtractorConsumeExtractedData;
    unsigned int _qos;
    unsigned long long _identifier;
    unsigned long long _taskKind;
    double _creationTime;
    long long _state;
    unsigned long long _suspendCount;
    NSString *_taskDescription;
    NSURLRequest *_originalRequest;
    NSURLRequest *_currentRequest;
    NSURLResponse *_response;
    NSDate *_earliestBeginDate;
    long long _countOfBytesClientExpectsToSend;
    long long _countOfBytesClientExpectsToReceive;
    NSError *_error;
    NSURL *_fileURL;
    NSURL *_downloadFileURL;
    NSString *_bundleID;
    NSString *_sessionID;
    unsigned long long _retryCount;
    unsigned long long _lowThroughputTimerRetryCount;
    long long _basePriority;
    long long _discretionaryOverride;
    NSString *_uniqueIdentifier;
    NSString *_storagePartitionIdentifier;
    long long _bytesPerSecondLimit;
    double _loadingPriority;
    NSString *_pathToDownloadTaskFile;
    double _timeoutIntervalForResource;
    id <SZExtractor> __extractor;
    long long _countOfBytesReceived;
    long long _countOfBytesSent;
    long long _countOfBytesExpectedToSend;
    long long _countOfBytesExpectedToReceive;
    NSDictionary *__backgroundTaskTimingData;
    NSDictionary *__backgroundTrailers;
    NSURLSessionTaskMetrics *__backgroundTaskMetrics;
    NSDictionary *_additionalProperties;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(retain) NSURLSessionTaskMetrics *_backgroundTaskMetrics; // @synthesize _backgroundTaskMetrics=__backgroundTaskMetrics;
@property(retain) NSDictionary *_backgroundTrailers; // @synthesize _backgroundTrailers=__backgroundTrailers;
@property(copy) NSDictionary *_backgroundTaskTimingData; // @synthesize _backgroundTaskTimingData=__backgroundTaskTimingData;
@property long long countOfBytesExpectedToReceive; // @synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive;
@property long long countOfBytesExpectedToSend; // @synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend;
@property long long countOfBytesSent; // @synthesize countOfBytesSent=_countOfBytesSent;
@property long long countOfBytesReceived; // @synthesize countOfBytesReceived=_countOfBytesReceived;
@property(nonatomic) BOOL _doesSZExtractorConsumeExtractedData; // @synthesize _doesSZExtractorConsumeExtractedData=__doesSZExtractorConsumeExtractedData;
@property(nonatomic) BOOL _hasSZExtractor; // @synthesize _hasSZExtractor=__hasSZExtractor;
@property(retain, nonatomic) id <SZExtractor> _extractor; // @synthesize _extractor=__extractor;
@property double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(copy) NSString *pathToDownloadTaskFile; // @synthesize pathToDownloadTaskFile=_pathToDownloadTaskFile;
@property BOOL mayBeDemotedToDiscretionary; // @synthesize mayBeDemotedToDiscretionary=_mayBeDemotedToDiscretionary;
@property double loadingPriority; // @synthesize loadingPriority=_loadingPriority;
@property long long bytesPerSecondLimit; // @synthesize bytesPerSecondLimit=_bytesPerSecondLimit;
@property(copy) NSString *storagePartitionIdentifier; // @synthesize storagePartitionIdentifier=_storagePartitionIdentifier;
@property(copy) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property unsigned int qos; // @synthesize qos=_qos;
@property long long discretionaryOverride; // @synthesize discretionaryOverride=_discretionaryOverride;
@property(getter=isDiscretionary) BOOL discretionary; // @synthesize discretionary=_discretionary;
@property long long basePriority; // @synthesize basePriority=_basePriority;
@property BOOL shouldCancelOnDisconnect; // @synthesize shouldCancelOnDisconnect=_shouldCancelOnDisconnect;
@property BOOL disablesRetry; // @synthesize disablesRetry=_disablesRetry;
@property unsigned long long lowThroughputTimerRetryCount; // @synthesize lowThroughputTimerRetryCount=_lowThroughputTimerRetryCount;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property BOOL establishedConnection; // @synthesize establishedConnection=_establishedConnection;
@property BOOL expectingResumeCallback; // @synthesize expectingResumeCallback=_expectingResumeCallback;
@property BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSURL *downloadFileURL; // @synthesize downloadFileURL=_downloadFileURL;
@property(copy) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy) NSError *error; // @synthesize error=_error;
@property BOOL respondedToWillBeginDelayedRequestCallback; // @synthesize respondedToWillBeginDelayedRequestCallback=_respondedToWillBeginDelayedRequestCallback;
@property BOOL resumedAndWaitingForEarliestBeginDate; // @synthesize resumedAndWaitingForEarliestBeginDate=_resumedAndWaitingForEarliestBeginDate;
@property long long countOfBytesClientExpectsToReceive; // @synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive;
@property long long countOfBytesClientExpectsToSend; // @synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend;
@property(copy) NSDate *earliestBeginDate; // @synthesize earliestBeginDate=_earliestBeginDate;
@property(copy) NSURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSURLRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(copy) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property unsigned long long suspendCount; // @synthesize suspendCount=_suspendCount;
@property long long state; // @synthesize state=_state;
@property double creationTime; // @synthesize creationTime=_creationTime;
@property unsigned long long taskKind; // @synthesize taskKind=_taskKind;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDownloadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithUploadTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (id)initWithDataTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;
- (void)_logTaskUUIDMapping;
- (id)_loggableDescription;
- (id)initWithTask:(id)arg1 uniqueIdentifier:(id)arg2 bundleID:(id)arg3 sessionID:(id)arg4;

@end

