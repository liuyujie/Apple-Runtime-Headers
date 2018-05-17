//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CUTDSEndpoint, NSObject<OS_dispatch_queue>, NSString;

@interface CUTDSSession : NSObject
{
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUTDSEndpoint *_endpoint;
    NSString *_label;
    unsigned long long _tdsHashActivate;
}

@property(nonatomic) unsigned long long tdsHashActivate; // @synthesize tdsHashActivate=_tdsHashActivate;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CUTDSEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
