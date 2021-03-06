//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData, NSDictionary, NSString;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>
{
    NSString *_responseUUID;
    NSDictionary *_contentResponseHeaders;
    NSData *_contentResponseBody;
}

@property(retain, nonatomic) NSData *contentResponseBody; // @synthesize contentResponseBody=_contentResponseBody;
@property(retain, nonatomic) NSDictionary *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
- (void).cxx_destruct;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;

@end

