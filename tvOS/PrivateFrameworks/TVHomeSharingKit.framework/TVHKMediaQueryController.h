//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperation, NSOperationQueue, NSString, TVHKMediaEntityServer, TVHSMediaServerContentsChange;

@interface TVHKMediaQueryController : NSObject
{
    TVHKMediaEntityServer *_mediaEntityServer;
    NSString *_identifier;
    NSString *_logNameSuffix;
    long long _state;
    NSOperationQueue *_processingQueue;
    NSOperationQueue *_serialQueryQueue;
    NSOperation *_contentsChangeQueryOperation;
    NSOperation *_delayContentsChangeOperation;
    TVHSMediaServerContentsChange *_cachedContentsChange;
    NSOperation *_cachedQueryOperation;
    unsigned long long _pauseCount;
}

@property(nonatomic) unsigned long long pauseCount; // @synthesize pauseCount=_pauseCount;
@property(retain, nonatomic) NSOperation *cachedQueryOperation; // @synthesize cachedQueryOperation=_cachedQueryOperation;
@property(copy, nonatomic) TVHSMediaServerContentsChange *cachedContentsChange; // @synthesize cachedContentsChange=_cachedContentsChange;
@property(retain, nonatomic) NSOperation *delayContentsChangeOperation; // @synthesize delayContentsChangeOperation=_delayContentsChangeOperation;
@property(retain, nonatomic) NSOperation *contentsChangeQueryOperation; // @synthesize contentsChangeQueryOperation=_contentsChangeQueryOperation;
@property(retain, nonatomic) NSOperationQueue *serialQueryQueue; // @synthesize serialQueryQueue=_serialQueryQueue;
@property(retain, nonatomic) NSOperationQueue *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *logNameSuffix; // @synthesize logNameSuffix=_logNameSuffix;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) TVHKMediaEntityServer *mediaEntityServer; // @synthesize mediaEntityServer=_mediaEntityServer;
- (void).cxx_destruct;
- (void)_queryOperationCompleted:(id)arg1 withQueryReason:(long long)arg2;
- (void)_enqueueQueryWithQueryReason:(long long)arg1 simulatedContentsChangeObjects:(id)arg2;
- (void)_handleMediaEntityServerContentsDidChange:(id)arg1;
- (id)_controllerLogString;
- (void)_handleMediaServerContentsDidChangeNotification:(id)arg1;
- (_Bool)_updateMutableArray:(id)arg1 withLatestObjects:(id)arg2 changes:(id)arg3 updateOnNoChanges:(_Bool)arg4;
- (_Bool)_updateMutableArray:(id)arg1 withResult:(id)arg2 updateOnNoChanges:(_Bool)arg3;
- (void)_stopAndWait:(_Bool)arg1;
- (_Bool)_shouldRequeryForContentsChange:(id)arg1;
- (void)_didCompleteQueryOperation:(id)arg1;
- (id)_queryOperationForQueryReason:(long long)arg1 simulatedContentsChangeObjects:(id)arg2;
- (void)simulateContentsChangeQueryWithObjects:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (id)initWithMediaEntityServer:(id)arg1;
- (id)init;

@end

