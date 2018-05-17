//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBSectionIcon, BBSectionInfoSettings, NSArray, NSData, NSString;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_sectionID;
    NSString *_subsectionID;
    int _sectionType;
    int _sectionCategory;
    BBSectionInfoSettings *_sectionInfoSettings;
    BBSectionInfoSettings *_managedSectionInfoSettings;
    NSString *_pathToWeeAppPluginBundle;
    NSString *_displayName;
    BBSectionIcon *_icon;
    NSArray *_subsections;
    BBSectionInfo *_parentSection;
    NSString *_factorySectionID;
    NSArray *_dataProviderIDs;
    NSArray *_filters;
    _Bool _suppressFromSettings;
    _Bool _displaysCriticalBulletins;
    _Bool _hideWeeApp;
    NSString *_appName;
    int _subsectionPriority;
    unsigned int _suppressedSettings;
    unsigned int _version;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultSectionInfoForType:(int)arg1;
+ (id)defaultSectionInfoForSection:(id)arg1;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(copy, nonatomic) NSArray *dataProviderIDs; // @synthesize dataProviderIDs=_dataProviderIDs;
@property(copy, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) _Bool hideWeeApp; // @synthesize hideWeeApp=_hideWeeApp;
@property(nonatomic) unsigned int suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(nonatomic) int subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property(nonatomic) __weak BBSectionInfo *parentSection; // @synthesize parentSection=_parentSection;
@property(copy, nonatomic) NSArray *subsections; // @synthesize subsections=_subsections;
@property(nonatomic) _Bool displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property(copy, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle; // @synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle;
@property(copy, nonatomic) BBSectionInfoSettings *sectionInfoSettings; // @synthesize sectionInfoSettings=_sectionInfoSettings;
@property(nonatomic) _Bool suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(copy, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
@property(nonatomic) unsigned int notificationCenterLimit;
@property(readonly, copy, nonatomic) NSData *iconData;
@property(nonatomic) unsigned int bulletinCount;
@property(nonatomic) _Bool enabled;
- (void)_dissociateDataProviderSectionInfo:(id)arg1;
- (void)_associateDataProviderSectionInfo:(id)arg1;
- (id)_subsectionForID:(id)arg1;
- (void)_replaceSubsection:(id)arg1;
- (void)_addSubsection:(id)arg1;
- (void)_configureWithDefaultsForSectionType:(int)arg1;
- (id)initWithDefaultsForSectionType:(int)arg1;
- (id)init;
- (id)effectiveSectionInfoWithFactoryInfo:(id)arg1 defaultContentPreviewSetting:(int)arg2;
- (int)disabledSettingForSetting:(int)arg1;
- (id)effectiveSectionInfoWithDefaultContentPreviewSetting:(int)arg1;
- (void)updateWithDefaultSectionInfo:(id)arg1;
- (void)updateWithDefaultFilters:(id)arg1;
- (id)copyFromManagedSettings;
@property(readonly, nonatomic) BBSectionInfoSettings *writableSettings;
@property(readonly, nonatomic) BBSectionInfoSettings *readableSettings;
@property(readonly, nonatomic) _Bool usesManagedSettings;
@property(copy, nonatomic) BBSectionInfoSettings *managedSectionInfoSettings;
- (_Bool)queryAndUseManagedSettingsForSectionID:(id)arg1;
- (_Bool)queryAndUseManagedSettings;
- (void)setShowsMessagePreview:(_Bool)arg1;
- (_Bool)showsMessagePreview;
@property(nonatomic) int contentPreviewSetting;
@property(nonatomic) _Bool showsOnExternalDevices;
@property(nonatomic) int carPlaySetting;
@property(nonatomic) unsigned int pushSettings;
@property(nonatomic) unsigned int alertType;
@property(nonatomic) _Bool showsInLockScreen;
@property(nonatomic) _Bool showsInNotificationCenter;
@property(nonatomic) _Bool allowsNotifications;

@end
