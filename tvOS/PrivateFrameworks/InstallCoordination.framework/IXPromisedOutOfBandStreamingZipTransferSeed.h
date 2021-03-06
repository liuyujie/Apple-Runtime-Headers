//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstallCoordination/IXOpaqueDataPromiseSeed.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary, NSURL;

@interface IXPromisedOutOfBandStreamingZipTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>
{
    unsigned long long _archiveBytesConsumed;
    unsigned long long _archiveSizeBytes;
    NSURL *_extractionPath;
    NSDictionary *_szOptions;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *szOptions; // @synthesize szOptions=_szOptions;
@property(retain, nonatomic) NSURL *extractionPath; // @synthesize extractionPath=_extractionPath;
@property(nonatomic) unsigned long long archiveSizeBytes; // @synthesize archiveSizeBytes=_archiveSizeBytes;
@property(nonatomic) unsigned long long archiveBytesConsumed; // @synthesize archiveBytesConsumed=_archiveBytesConsumed;
- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

