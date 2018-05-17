//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding>
{
    long long _uniqueIdentifier;
    NSString *_localizedName;
    NSString *_localizedDescription;
    NSString *_stationStringID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStation:(id)arg1;

@end
