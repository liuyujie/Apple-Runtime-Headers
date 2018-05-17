//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TVHomeSharingKit/TVHKMediaEntityImageLoader.h>

@class NSOperationQueue, NSString, TVHKMediaEntityFetchCache, TVHKMediaEntitySearchManager, TVHSMediaServerIdentifier, TVHSMediaServerProtocolVersion, TVHSMediaServerSessionState;

@interface TVHKMediaEntityServer : TVHKMediaEntityImageLoader
{
    _Bool _allowsCaching;
    unsigned int _fairPlayContext;
    NSString *_displayName;
    unsigned long long _connectionState;
    NSString *_keybagPath;
    TVHSMediaServerIdentifier *_identifier;
    unsigned long long _type;
    TVHKMediaEntitySearchManager *_searchManager;
    TVHKMediaEntityFetchCache *_fetchCache;
    TVHSMediaServerSessionState *_sessionState;
    NSOperationQueue *_processingQueue;
    NSOperationQueue *_concurrentQueryQueue;
    NSOperationQueue *_serialQueryQueue;
    NSOperationQueue *_queryCompletionQueue;
    NSOperationQueue *_notificationQueue;
    NSString *_imageLoaderIdentifier;
    TVHSMediaServerProtocolVersion *_protocolVersion;
}

+ (id)_preflightSearchRequest:(id)arg1 connectionState:(unsigned long long)arg2 allowsCaching:(_Bool)arg3;
+ (id)_preflightFetchRequest:(id)arg1 connectionState:(unsigned long long)arg2 sessionState:(id)arg3;
+ (id)_preflightMediaServerRequestWithConnectionState:(unsigned long long)arg1;
+ (_Bool)_didContentsChangeWithNewSessionState:(id)arg1 oldSessionState:(id)arg2 revisionKeyPath:(id)arg3;
@property(copy, nonatomic) TVHSMediaServerProtocolVersion *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy, nonatomic) NSString *imageLoaderIdentifier; // @synthesize imageLoaderIdentifier=_imageLoaderIdentifier;
@property(nonatomic) _Bool allowsCaching; // @synthesize allowsCaching=_allowsCaching;
@property(retain, nonatomic) NSOperationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSOperationQueue *queryCompletionQueue; // @synthesize queryCompletionQueue=_queryCompletionQueue;
@property(retain, nonatomic) NSOperationQueue *serialQueryQueue; // @synthesize serialQueryQueue=_serialQueryQueue;
@property(retain, nonatomic) NSOperationQueue *concurrentQueryQueue; // @synthesize concurrentQueryQueue=_concurrentQueryQueue;
@property(retain, nonatomic) NSOperationQueue *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(copy, nonatomic) TVHSMediaServerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(retain, nonatomic) TVHKMediaEntityFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(retain, nonatomic) TVHKMediaEntitySearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TVHSMediaServerIdentifier *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_cancelAllQueryOperations;
- (void)_checkinCheckoutRentalMediaItem:(id)arg1 checkin:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_playbackDidTimeout;
- (void)_disconnect;
- (void)_handleMediaEntityResponseParseError:(id)arg1;
- (void)_handleStartConnectingError:(id)arg1;
- (id)_preflightMediaServerRequest;
- (void)_postNotificationWithNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postContentsDidChangeNotificationWithProtocol:(unsigned long long)arg1 revision:(unsigned long long)arg2 photoLibraryState:(unsigned long long)arg3;
- (void)_postDPAPContentsDidChangeNotificationWithSessionState:(id)arg1;
- (void)_postDAAPContentsDidChangeNotificationWithSessionState:(id)arg1;
@property(nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
- (void)setFairPlayContext:(unsigned int)arg1;
- (void)setKeybagPath:(id)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)_handlePlaybackErrorNotification:(id)arg1;
- (id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3;
- (id)_imageLoaderIdentifier;
- (void)_playbackURLForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeKeybagWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_checkinRentalMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_checkoutRentalMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateWithDisplayName:(id)arg1 connectionState:(unsigned long long)arg2 sessionState:(id)arg3 keybagPath:(id)arg4;
@property(readonly, nonatomic) unsigned int fairPlayContext; // @synthesize fairPlayContext=_fairPlayContext;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)saveMediaEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueSearchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)enqueueKeepAliveWithCompletion:(CDUnknownBlockType)arg1;
- (id)availableMediaCategoryTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connect;
@property(readonly, nonatomic, getter=isConnectable) _Bool connectable;
@property(readonly, nonatomic) _Bool supportsDRMContent;
@property(readonly, copy, nonatomic) NSString *keybagPath; // @synthesize keybagPath=_keybagPath;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 protocolVersion:(id)arg3 allowCaching:(_Bool)arg4;
- (id)init;

@end
