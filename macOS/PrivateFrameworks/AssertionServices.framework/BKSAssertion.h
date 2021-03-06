//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSSignal, NSObject<OS_dispatch_queue>, NSString;

@interface BKSAssertion : NSObject
{
    BSSignal *_invalidationSignal;
    BOOL _acquired;
    NSString *_identifier;
    NSString *_name;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _acquisitionHandler;
    id <BKSAssertionClientProtocol> _client;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (void)_clientQueue_updateAssertion;
- (BOOL)_clientQueue_acquireAssertion;
- (void)_clientQueue_invalidate:(BOOL)arg1;
- (void)_registerAssertionAndAcquire:(BOOL)arg1;
- (id)_clientQueue_updateEvent;
- (id)_clientQueue_destroyEvent;
- (id)_clientQueue_createEvent;
- (id)_clientQueue;
- (id)_clientQueue_client;
- (BOOL)_clientQueue_acquired;
- (id)_clientQueue_identifier;
- (id)_clientQueue_name;
- (void)assertionDidInvalidate;
- (void)invalidate;
- (BOOL)acquire;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(readonly, nonatomic) BOOL valid;
- (void)dealloc;
- (id)_initWithClient:(id)arg1;
- (id)_initWithClient:(id)arg1 name:(id)arg2;
- (id)_initWithClient:(id)arg1 name:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)init;

@end

