//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "NSURLSessionDelegate.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLSession;

@interface HMDServerBag : HMFObject <NSURLSessionDelegate>
{
    _Bool _refreshing;
    NSDictionary *_dictionaryRepresentation;
    unsigned int _environment;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSURLSession *_urlSession;
}

+ (id)defaultServerBag;
+ (void)initialize;
+ (id)activationHostnameURLOverride;
+ (id)activationCertificateHostnameURLOverride;
+ (id)serverBagURLForEnvironment:(unsigned int)arg1;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned int environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double accessoryReportTimeout;
@property(readonly, copy, nonatomic) NSURL *accessoryReportURL;
@property(readonly, copy, nonatomic) NSURL *activationCertificateHostnameURL;
@property(readonly, copy, nonatomic) NSURL *activationHostnameURL;
@property(copy, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)_loadDefaultBag;
- (id)initWithEnvironment:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

