//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPServerInfo : PBCodable <NSCopying>
{
    NSString *_partition;
    NSString *_serviceBuild;
    NSString *_serviceInstance;
    NSString *_serviceName;
}

@property(retain, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property(retain, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasServiceInstance;
@property(readonly, nonatomic) _Bool hasServiceBuild;
@property(readonly, nonatomic) _Bool hasPartition;
@property(readonly, nonatomic) _Bool hasServiceName;

@end

