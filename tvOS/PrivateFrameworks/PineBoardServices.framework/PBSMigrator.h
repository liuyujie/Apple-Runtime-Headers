//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PBSMigrator : NSObject
{
    NSMutableArray *_allMigrations;
}

+ (id)_contextForCurrentOS;
+ (void)_resetMigrator;
+ (_Bool)_performMigrationWithContext:(id)arg1;
+ (_Bool)performMigrationIfNeeded;
+ (void)registerMigration:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *allMigrations; // @synthesize allMigrations=_allMigrations;
- (void).cxx_destruct;
- (void)_performMigrationsWithContext:(id)arg1;
- (id)_init;
- (id)init;

@end

