//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _shouldFilterExternalOriginatedDownloads;
    _Bool _shouldReportDownloadProgress;
    NSString *_persistenceIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldReportDownloadProgress; // @synthesize shouldReportDownloadProgress=_shouldReportDownloadProgress;
@property(nonatomic) _Bool shouldFilterExternalOriginatedDownloads; // @synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads;
@property(copy, nonatomic) NSString *persistenceIdentifier; // @synthesize persistenceIdentifier=_persistenceIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

