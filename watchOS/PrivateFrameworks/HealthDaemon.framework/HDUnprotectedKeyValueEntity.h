//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDUnprotectedKeyValueEntity : HDKeyValueEntity
{
}

+ (int)protectionClass;
+ (id)databaseTable;
+ (id)keyForNotificationDomain:(int)arg1 error:(out id *)arg2;
+ (_Bool)setBadge:(id)arg1 forDomain:(int)arg2 profile:(id)arg3 error:(out id *)arg4;
+ (id)badgeForDomain:(int)arg1 profile:(id)arg2 error:(out id *)arg3;

@end
