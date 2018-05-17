//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEODataSessionTaskDelegate.h"

@class GEOClientMetrics, GEODataRequest, GEODataSession, GEODataSessionTask, NSData, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate>
{
    GEODataRequest *_request;
    NSData *_data;
    GEODataSessionTask *_task;
    NSString *_responseEtag;
    struct _GEOTileKey _key;
    NSString *_editionHeader;
    _GEOSimpleTileRequesterOperation *_baseTile;
    _GEOSimpleTileRequesterOperation *_localizationTile;
    id <GEOSimpleTileRequesterOperationDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_os_activity> *_parentTileActivity;
    double _timeout;
    double _startTime;
    GEOClientMetrics *_clientMetrics;
    int _attempts;
    int _checksumMethod;
    unsigned int _tileEdition;
    unsigned char _eTagType;
    _Bool _finished;
    // Error parsing type: AI, name: _priority
    GEODataSession *_dataSession;
}

@property(retain, nonatomic) GEOClientMetrics *clientMetrics; // @synthesize clientMetrics=_clientMetrics;
@property(retain, nonatomic) NSString *responseEtag; // @synthesize responseEtag=_responseEtag;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <GEOSimpleTileRequesterOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile; // @synthesize localizationTile=_localizationTile;
@property(retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile; // @synthesize baseTile=_baseTile;
@property unsigned int tileEdition; // @synthesize tileEdition=_tileEdition;
@property(retain, nonatomic) NSString *editionHeader; // @synthesize editionHeader=_editionHeader;
@property(retain, nonatomic) GEODataSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property struct _GEOTileKey key; // @synthesize key=_key;
@property(nonatomic) unsigned char eTagType; // @synthesize eTagType=_eTagType;
@property(retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity; // @synthesize parentTileActivity=_parentTileActivity;
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) GEODataRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) GEODataSession *dataSession; // @synthesize dataSession=_dataSession;
- (void).cxx_destruct;
- (void)_reportNetworkError:(id)arg1;
- (void)taskFailed:(id)arg1 withError:(id)arg2;
- (_Bool)validateTileIntegrityForTask:(id)arg1;
- (void)dataSession:(id)arg1 didCompleteTask:(id)arg2;
@property(readonly, nonatomic) _Bool responseIsCacheable;
@property(readonly, nonatomic) int responseSource;
@property(readonly, nonatomic) int httpResponseStatusCode;
- (double)startTime;
- (double)elapsed;
- (void)clearAllRelatedOperations;
- (void)cancel;
- (void)start;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned int contentLength;
@property(readonly, nonatomic) NSURL *URL;
@property unsigned int priority;
- (id)initWithRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
