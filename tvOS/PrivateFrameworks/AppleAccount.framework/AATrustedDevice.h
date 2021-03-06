//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AATrustedDevice : NSObject
{
    _Bool _fmipEnabled;
    _Bool _currentDevice;
    _Bool _showFMIPLink;
    _Bool _showBackupRow;
    _Bool _showFMIPRow;
    _Bool _injectNativeHeader;
    NSString *_deviceID;
    NSString *_name;
    NSString *_model;
    NSString *_osVersion;
    NSString *_modelDisplayName;
    NSString *_modelSmallPhotoURL3x;
    NSString *_modelSmallPhotoURL2x;
    NSString *_modelSmallPhotoURL1x;
    NSString *_modelLargePhotoURL3x;
    NSString *_modelLargePhotoURL2x;
    NSString *_modelLargePhotoURL1x;
    NSString *_deviceDetailUri;
    NSString *_deviceDetailHttpMethod;
    NSString *_FMIPDeviceID;
    NSString *_detailDeviceName;
    NSString *_detailSubLabel;
    NSString *_deviceQualifiedClass;
    NSString *_rawLatestBackup;
    NSString *_backupUUID;
}

@property(readonly, nonatomic) NSString *backupUUID; // @synthesize backupUUID=_backupUUID;
@property(readonly, nonatomic) NSString *rawLatestBackup; // @synthesize rawLatestBackup=_rawLatestBackup;
@property(readonly, nonatomic) NSString *deviceQualifiedClass; // @synthesize deviceQualifiedClass=_deviceQualifiedClass;
@property(readonly, nonatomic) NSString *detailSubLabel; // @synthesize detailSubLabel=_detailSubLabel;
@property(readonly, nonatomic) NSString *detailDeviceName; // @synthesize detailDeviceName=_detailDeviceName;
@property(readonly, nonatomic) NSString *FMIPDeviceID; // @synthesize FMIPDeviceID=_FMIPDeviceID;
@property(readonly, nonatomic) _Bool injectNativeHeader; // @synthesize injectNativeHeader=_injectNativeHeader;
@property(readonly, nonatomic) _Bool showFMIPRow; // @synthesize showFMIPRow=_showFMIPRow;
@property(readonly, nonatomic) _Bool showBackupRow; // @synthesize showBackupRow=_showBackupRow;
@property(readonly, nonatomic) _Bool showFMIPLink; // @synthesize showFMIPLink=_showFMIPLink;
@property(readonly, nonatomic) _Bool currentDevice; // @synthesize currentDevice=_currentDevice;
@property(readonly, nonatomic) _Bool fmipEnabled; // @synthesize fmipEnabled=_fmipEnabled;
@property(readonly, nonatomic) NSString *deviceDetailHttpMethod; // @synthesize deviceDetailHttpMethod=_deviceDetailHttpMethod;
@property(readonly, nonatomic) NSString *deviceDetailUri; // @synthesize deviceDetailUri=_deviceDetailUri;
@property(readonly, nonatomic) NSString *modelLargePhotoURL1x; // @synthesize modelLargePhotoURL1x=_modelLargePhotoURL1x;
@property(readonly, nonatomic) NSString *modelLargePhotoURL2x; // @synthesize modelLargePhotoURL2x=_modelLargePhotoURL2x;
@property(readonly, nonatomic) NSString *modelLargePhotoURL3x; // @synthesize modelLargePhotoURL3x=_modelLargePhotoURL3x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL1x; // @synthesize modelSmallPhotoURL1x=_modelSmallPhotoURL1x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL2x; // @synthesize modelSmallPhotoURL2x=_modelSmallPhotoURL2x;
@property(readonly, nonatomic) NSString *modelSmallPhotoURL3x; // @synthesize modelSmallPhotoURL3x=_modelSmallPhotoURL3x;
@property(readonly, nonatomic) NSString *modelDisplayName; // @synthesize modelDisplayName=_modelDisplayName;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (void)updateWithRUIClientInfo:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

