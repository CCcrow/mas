//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions
{
    ASDJobManifest *_manifest;
}

@property(copy, nonatomic) ASDJobManifest *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;
- (id)initWithManifest:(id)arg1;
- (id)init;

@end
