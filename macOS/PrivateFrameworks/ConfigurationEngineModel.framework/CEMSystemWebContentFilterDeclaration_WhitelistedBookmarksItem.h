//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemWebContentFilterDeclaration_WhitelistedBookmarksItem : CEMPayloadBase
{
    NSString *_payloadURL;
    NSString *_payloadBookmarkPath;
    NSString *_payloadTitle;
}

+ (id)buildRequiredOnlyWithURL:(id)arg1 withTitle:(id)arg2;
+ (id)buildWithURL:(id)arg1 withBookmarkPath:(id)arg2 withTitle:(id)arg3;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadTitle; // @synthesize payloadTitle=_payloadTitle;
@property(copy, nonatomic) NSString *payloadBookmarkPath; // @synthesize payloadBookmarkPath=_payloadBookmarkPath;
@property(copy, nonatomic) NSString *payloadURL; // @synthesize payloadURL=_payloadURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

