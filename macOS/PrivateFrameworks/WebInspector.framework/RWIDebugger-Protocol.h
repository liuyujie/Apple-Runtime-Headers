//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData, NSString, RWIDebuggable;

@protocol RWIDebugger
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) RWIDebuggable *debuggable;
- (void)sendMessageToBackend:(NSString *)arg1;
- (void)sendMessageToFrontend:(NSData *)arg1;
@end
