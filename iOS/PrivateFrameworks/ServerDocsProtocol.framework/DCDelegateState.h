//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCCachedItem, NSData, NSObject<OS_dispatch_queue>;

@interface DCDelegateState : NSObject
{
    id <DCDocumentManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    DCCachedItem *_item;
    NSData *_watchedVersionIdentifier;
}

+ (id)delegateStateWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3;
@property(retain) NSData *watchedVersionIdentifier; // @synthesize watchedVersionIdentifier=_watchedVersionIdentifier;
@property(readonly) DCCachedItem *item; // @synthesize item=_item;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) __weak id <DCDocumentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 item:(id)arg3;

@end
