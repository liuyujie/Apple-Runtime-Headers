//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLTSendQueueSerializerDelegate.h"

@class NSNumber, NSObject, NSString, PBCodable;

@protocol BLTSettingsSendSerializerDelegate <BLTSendQueueSerializerDelegate>
- (void)sendRequest:(PBCodable *)arg1 type:(unsigned short)arg2 withTimeout:(NSNumber *)arg3 withDescription:(NSObject *)arg4 onlyOneFor:(NSString *)arg5 didSend:(void (^)(_Bool, NSError *))arg6 andResponse:(void (^)(IDSProtobuf *))arg7;
@end
