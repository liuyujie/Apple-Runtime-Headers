//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BTMLoginItem;

@protocol BTMServiceProtocol
- (void)openLoginItemsWithReply:(void (^)(NSError *))arg1;
- (void)removeLoginItem:(BTMLoginItem *)arg1 reply:(void (^)(NSError *))arg2;
- (void)addLoginItem:(BTMLoginItem *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getLoginItemsWithTypeMask:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
@end
