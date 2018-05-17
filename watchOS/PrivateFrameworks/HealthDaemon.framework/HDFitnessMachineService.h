//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@interface HDFitnessMachineService : HDHealthService
{
    unsigned int _machineType;
}

+ (unsigned int)typeFromAdvertisementData:(id)arg1;
+ (id)_allCharacteristicClasses;
+ (id)_characteristicsMap;
+ (id)implementedProperties;
+ (id)serviceUUID;
+ (int)serviceType;
@property(readonly, nonatomic) unsigned int machineType; // @synthesize machineType=_machineType;
- (_Bool)processAdvertisementData:(id)arg1;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (id)servicesInProfile;
- (void)readProperty:(id)arg1;

@end
