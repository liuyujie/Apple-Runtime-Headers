//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol VCPStorageServiceProtocol
- (void)registerClient:(NSString *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)storeAnalysis:(NSDictionary *)arg1 forAsset:(NSString *)arg2 withReply:(void (^)(void))arg3;
@end

