//
//  WeexNatModal.h
//
//  Created by Acathur on 17/1/7.
//  Copyright © 2017 Instapp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WeexSDK/WeexSDK.h>
#import <WeexPluginLoader/WeexPluginLoader.h>
#import <NatModal/NatModal.h>


@protocol NatModalPro <WXModuleProtocol>

- (void)alert:(NSDictionary *)params :(WXModuleCallback)callback;
- (void)confirm:(NSDictionary *)params :(WXModuleCallback)callback;
- (void)prompt:(NSDictionary *)params :(WXModuleCallback)callback;
- (void)toast:(NSDictionary *)params :(WXModuleCallback)callback;


@end

@interface WeexNatModal : NSObject<NatModalPro>

@end
