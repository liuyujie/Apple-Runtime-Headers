//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSError;

@protocol PPConnectionsClientProtocol
- (void)recentLocationsBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
@end

