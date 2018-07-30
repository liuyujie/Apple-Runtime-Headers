//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSDate, NSString, NSURL;

@interface CPLMomentShare : NSObject <NSSecureCoding, NSCopying>
{
    short _mode;
    NSString *_identifier;
    NSString *_title;
    NSDate *_creationDate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_expiryDate;
    int _assetCount;
    int _photosCount;
    int _videosCount;
    NSData *_thumbnailImageData;
    NSData *_previewData;
    NSArray *_participants;
    NSURL *_shareURL;
    NSString *_originatingScopeIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
@property(copy, nonatomic) NSString *originatingScopeIdentifier; // @synthesize originatingScopeIdentifier=_originatingScopeIdentifier;
@property(copy, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSData *previewData; // @synthesize previewData=_previewData;
@property(copy, nonatomic) NSData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(nonatomic) int videosCount; // @synthesize videosCount=_videosCount;
@property(nonatomic) int photosCount; // @synthesize photosCount=_photosCount;
@property(nonatomic) int assetCount; // @synthesize assetCount=_assetCount;
@property(copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) short mode; // @synthesize mode=_mode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
