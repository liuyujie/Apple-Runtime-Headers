//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ADConfigurationResponse : PBCodable <NSCopying>
{
    int _bannerProxyType;
    NSString *_configVersion;
    NSMutableArray *_theConfigurations;
    NSString *_resourceConnectProxyURL;
    NSString *_resourceProxyURL;
    struct {
        unsigned int bannerProxyType:1;
    } _has;
}

+ (Class)theConfigurationType;
@property(retain, nonatomic) NSString *configVersion; // @synthesize configVersion=_configVersion;
@property(retain, nonatomic) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property(retain, nonatomic) NSString *resourceProxyURL; // @synthesize resourceProxyURL=_resourceProxyURL;
@property(retain, nonatomic) NSMutableArray *theConfigurations; // @synthesize theConfigurations=_theConfigurations;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasConfigVersion;
- (int)StringAsBannerProxyType:(id)arg1;
- (id)bannerProxyTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasBannerProxyType;
@property(nonatomic) int bannerProxyType; // @synthesize bannerProxyType=_bannerProxyType;
@property(readonly, nonatomic) _Bool hasResourceConnectProxyURL;
@property(readonly, nonatomic) _Bool hasResourceProxyURL;
- (id)theConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)theConfigurationsCount;
- (void)addTheConfiguration:(id)arg1;
- (void)clearTheConfigurations;

@end

