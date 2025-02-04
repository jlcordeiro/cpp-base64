#include "base64.h"
#include <iostream>
#include <chrono>

int main() {

    const std::string lorem_ipsum =
      "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus consectetur\n"
      "eros eros, eu aliquet massa fermentum eu. Vestibulum vehicula imperdiet est ut\n"
      "efficitur. Quisque at urna commodo, semper tortor sed, varius orci. Nulla\n"
      "commodo neque urna, nec fermentum eros posuere quis. Ut facilisis lacus vitae\n"
      "congue sagittis. Donec ac eros in justo ornare bibendum. Ut mollis consequat\n"
      "quam, id egestas mauris rutrum at. Donec condimentum rutrum turpis, non\n"
      "pulvinar mi.  Donec tincidunt, ligula pulvinar iaculis dignissim, arcu dolor\n"
      "dignissim ipsum, ac viverra ipsum orci vitae nunc. Pellentesque ut gravida\n"
      "velit. Etiam enim velit, maximus eu mauris eu, tincidunt ultrices est. Class\n"
      "aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos\n"
      "himenaeos. Sed maximus nunc ut tempor porta. Suspendisse lacinia scelerisque\n"
      "nunc, sit amet iaculis lacus dictum ac. Nunc feugiat venenatis tortor, eget\n"
      "congue magna. Morbi sagittis pulvinar odio. Pellentesque habitant morbi\n"
      "tristique senectus et netus et malesuada fames ac turpis egestas.  Vestibulum\n"
      "sit amet aliquet neque. Praesent venenatis orci sed nibh pulvinar scelerisque.\n"
      "Curabitur dapibus cursus lorem, non lacinia arcu luctus at. Nullam accumsan\n"
      "facilisis nisl, a lacinia leo tempus et. Nulla facilisi. Morbi placerat\n"
      "elementum mauris vel malesuada. Aliquam egestas porta massa, id vehicula nibh\n"
      "tincidunt quis. Cras tortor massa, pharetra nec molestie non, pellentesque et\n"
      "tellus. Ut id ante mattis, condimentum risus in, placerat magna.  Sed faucibus\n"
      "nulla lorem, sit amet aliquet lorem tincidunt finibus. Aliquam erat volutpat.\n"
      "Vestibulum maximus ut risus ac eleifend. Curabitur id neque massa. Mauris\n"
      "euismod suscipit elementum. Sed consectetur ex in ante eleifend consequat.\n"
      "Vivamus lectus dolor, posuere vitae metus eu, lobortis hendrerit sapien. Donec\n"
      "nisi elit, pulvinar non diam at, pretium convallis ante.  Quisque nec pulvinar\n"
      "velit, vel placerat nunc. Cras sed tellus in lorem vehicula dapibus. Nunc non\n"
      "dignissim ligula. Cras imperdiet porta iaculis. Nulla pulvinar porta est,\n"
      "suscipit auctor nisl sodales vel. Maecenas scelerisque dignissim erat, quis\n"
      "semper tortor. Nam sed tincidunt urna. Quisque maximus sed erat et pulvinar.\n"
      "Pellentesque viverra maximus ultrices. Donec blandit dictum enim vel\n"
      "pellentesque. Sed nec sodales nunc. Nullam lacinia mattis lacus a dapibus.\n"
      "Proin ut erat vestibulum, semper massa maximus, tempor risus. Donec vulputate\n"
      "eget turpis ac placerat. Quisque gravida tellus nec diam mollis scelerisque.\n"
      "Nullam egestas pellentesque dictum. Suspendisse quis ex justo. Pellentesque id\n"
      "nisi dapibus, convallis augue sit amet, rhoncus neque. Maecenas et justo velit.\n"
      "Mauris et sollicitudin arcu, porta posuere urna. Mauris vestibulum elit eu enim\n"
      "pretium, eu blandit metus lobortis.  Phasellus sit amet mollis odio. Mauris\n"
      "vehicula at nunc at mattis. Morbi non justo sapien. Mauris sodales, justo in\n"
      "hendrerit pellentesque, orci metus suscipit erat, a suscipit arcu justo ut\n"
      "ipsum. Duis eget nisl quam. Aenean vulputate, odio at scelerisque ultricies,\n"
      "mauris enim elementum purus, non cursus enim neque sed mauris. Nulla suscipit\n"
      "risus at ipsum efficitur vestibulum. Phasellus non eleifend urna. Quisque\n"
      "dapibus turpis et dignissim tempor. Integer pulvinar est sit amet mollis\n"
      "accumsan.  Nunc vel massa maximus, ullamcorper turpis eget, elementum sem. Sed\n"
      "faucibus vulputate velit, vitae cursus nunc suscipit at. Maecenas justo ante,\n"
      "lacinia vel fermentum ac, mattis in orci. Duis aliquet tincidunt congue. Sed\n"
      "nec velit felis. Fusce pulvinar pharetra elit, et dictum dolor sagittis a. In\n"
      "hac habitasse platea dictumst. Morbi ac ligula vel mauris pellentesque rutrum.\n"
      "Aliquam vitae velit imperdiet, facilisis lectus id, ultricies dui. Vivamus\n"
      "porttitor, sapien non mattis lacinia, velit nisi dapibus arcu, vel euismod mi\n"
      "diam vitae mauris.  Vestibulum rhoncus auctor nunc, ac imperdiet nisi\n"
      "vestibulum at. Fusce odio enim, interdum eget leo viverra, gravida aliquet\n"
      "lorem. Praesent faucibus viverra ligula vel convallis. In hac habitasse platea\n"
      "dictumst. Proin nec mi eget arcu porttitor consectetur eu eget ante. In sed\n"
      "placerat lacus, eget scelerisque arcu. Phasellus sed blandit lectus, tincidunt\n"
      "efficitur libero. Proin tincidunt lorem vulputate elit egestas mattis. Maecenas\n"
      "efficitur rhoncus diam eu consectetur. Nam maximus vulputate nulla a auctor.\n"
      "Aenean a velit tempus, pellentesque est dictum, eleifend tortor.  Mauris quis\n"
      "nulla nisi. Morbi ac arcu condimentum, eleifend libero molestie, accumsan nisl.\n"
      "Suspendisse eu volutpat dolor. Etiam sodales sapien ut nunc iaculis, id viverra\n"
      "lorem aliquet. Aliquam erat volutpat. Sed libero leo, sodales vel malesuada et,\n"
      "volutpat a est. Cras faucibus felis eget cursus feugiat. Nullam ac sapien nec\n"
      "nisl pulvinar sagittis vel sed risus. Ut nec lobortis arcu. Nullam ac cursus\n"
      "nisi, eu auctor lectus. In hac habitasse platea dictumst. Morbi id lorem sed\n"
      "velit venenatis laoreet. Aenean diam massa, congue quis lorem finibus, egestas\n"
      "pellentesque lacus. Duis eget turpis in nisi efficitur consequat. Integer ipsum\n"
      "mi, commodo ut purus vitae, dictum dignissim urna.  Cras tempor ligula rhoncus\n"
      "magna fermentum dignissim. Duis posuere tortor ante, nec tristique urna pretium\n"
      "in. Quisque suscipit, sapien eu malesuada placerat, ipsum ante consectetur ex,\n"
      "a mollis enim orci sed orci. Proin placerat mi nec interdum interdum. Quisque\n"
      "lorem libero, vehicula eu facilisis quis, accumsan eu lacus. Sed sed orci ac\n"
      "nisl sodales hendrerit vel ut mauris. Donec condimentum nec elit id feugiat.\n"
      "Etiam placerat sollicitudin lorem sed consequat. Quisque iaculis porta dolor\n"
      "sed placerat. In hendrerit ac felis eu bibendum. Suspendisse potenti. Aliquam\n"
      "erat volutpat. Vestibulum condimentum justo erat, ornare varius lectus maximus\n"
      "id. Cras commodo lacus ante, vel imperdiet dui facilisis et.  Praesent placerat\n"
      "diam quis diam pellentesque, ac tincidunt elit luctus. Vestibulum ac orci odio.\n"
      "Pellentesque lobortis elit at semper fringilla. Duis vel tellus id tortor\n"
      "commodo elementum in id ligula. Integer diam lorem, mattis sit amet sem non,\n"
      "mattis maximus leo. Nunc mattis nulla eu purus vehicula luctus. Aenean\n"
      "tristique a eros quis aliquet. Cras quis arcu libero.  Sed ac tortor eu turpis\n"
      "maximus dignissim. Sed vel sapien eget est blandit pulvinar a quis ipsum. In\n"
      "consequat vehicula nulla, vitae aliquam sapien ultrices sit amet. Sed faucibus\n"
      "augue non ipsum dictum maximus. Curabitur eu odio porttitor, ultrices libero\n"
      "at, gravida purus. Phasellus tincidunt libero at ante congue, id dapibus ipsum\n"
      "scelerisque. Nulla feugiat sed nibh vitae pulvinar. Vivamus id eros augue. Ut\n"
      "scelerisque elementum massa, ut condimentum quam venenatis nec. Mauris eget\n"
      "felis vel ligula viverra consectetur. Donec condimentum nec odio ac hendrerit.\n"
      "Ut rhoncus nec ipsum rhoncus dignissim. Proin sed nulla auctor, accumsan enim\n"
      "vitae, ornare ex. Phasellus et condimentum tellus. Vivamus auctor est eu\n"
      "consectetur luctus. Integer ac eros vel dolor tempus tristique a in lacus.\n"
      "Pellentesque eget pulvinar neque, in finibus nulla. Donec scelerisque massa a\n"
      "tortor ultricies, id ullamcorper ligula ullamcorper.  Nam eget tempor erat. Nam\n"
      "pharetra consequat velit, in imperdiet nunc aliquam vel. Proin ut nisi\n"
      "tristique, ullamcorper leo sed, venenatis tellus. Sed consequat felis purus,\n"
      "quis pellentesque nulla facilisis nec. Cras eu ullamcorper velit. Vivamus non\n"
      "dui tristique, finibus odio ut, mollis est. Mauris at aliquam mauris. Donec id\n"
      "luctus turpis, suscipit porttitor nulla. Vivamus condimentum sem et velit\n"
      "feugiat elementum. Pellentesque vehicula turpis in massa consectetur luctus.\n"
      "Etiam interdum rhoncus blandit. Fusce in nisl vitae odio accumsan condimentum.\n"
      "Nam dignissim, odio a tincidunt malesuada, sem purus lobortis dui, eu rhoncus\n"
      "mi leo ac enim. Integer tincidunt turpis eros. Quisque sollicitudin sodales\n"
      "mauris, vitae lacinia orci commodo vitae.  Curabitur malesuada mattis luctus.\n"
      "Nullam quis magna consequat, consequat nisl nec, blandit nunc. Aliquam eget\n"
      "tristique urna. Nulla odio sem, aliquam sed ultricies lacinia, egestas tempor\n"
      "enim. Morbi quis dapibus nisl, sit amet elementum nibh. Vestibulum ante ipsum\n"
      "primis in faucibus orci luctus et ultrices posuere cubilia curae; Nam tincidunt\n"
      "a sem eget sollicitudin. Morbi et nisi accumsan lorem congue lobortis.  Cras\n"
      "tempus ligula sit amet neque elementum, eget dictum nulla aliquet. Integer\n"
      "ultrices ligula vel tellus luctus, non porta quam vulputate. Nam mattis quis\n"
      "nisl a auctor. Quisque sed lacus eget dui tempor scelerisque ut ut quam. Nam\n"
      "nec tempor justo. Sed eget varius risus. Duis placerat auctor ornare. Ut\n"
      "interdum maximus aliquam.  Maecenas volutpat risus non pellentesque\n"
      "scelerisque. Maecenas finibus tempor sollicitudin. Nunc malesuada rhoncus quam\n"
      "non luctus. Integer facilisis mauris in nunc viverra, sit amet lobortis leo\n"
      "gravida. Nam ut magna congue, tincidunt nisl id, ullamcorper urna. Praesent\n"
      "ultricies ipsum sed lorem sagittis mollis. Sed varius arcu ac nibh ornare, vel\n"
      "consectetur nibh congue. Phasellus quis ligula ligula. Quisque volutpat lectus\n"
      "sed gravida auctor. Etiam placerat fringilla quam, vel facilisis lorem\n"
      "imperdiet nec. Sed massa turpis, finibus vitae pretium ut, laoreet interdum\n"
      "leo. Mauris vitae orci dui. Fusce eu odio lacinia, accumsan lectus nec, laoreet\n"
      "dolor. Pellentesque dui turpis, iaculis ut est sed, tincidunt molestie quam.\n"
      "Phasellus maximus rhoncus magna eu interdum. Fusce venenatis at nunc vestibulum\n"
      "congue. Curabitur ut imperdiet leo. Nulla eu neque rutrum, volutpat ante eu,\n"
      "posuere eros. Ut sed tempus mauris. Vestibulum mollis libero at turpis aliquet,\n"
      "luctus commodo libero posuere. Praesent porttitor vel odio et sagittis. Lorem\n"
      "ipsum dolor sit amet, consectetur adipiscing elit. Cras a ante ac ex lobortis\n"
      "sollicitudin non quis nulla. Etiam tincidunt leo fringilla, suscipit dolor nec,\n"
      "semper nibh.  Donec mattis metus et tortor pulvinar pulvinar. Maecenas quis\n"
      "varius dolor. Proin convallis lorem varius egestas auctor. Duis et quam eu\n"
      "ipsum scelerisque commodo. Donec et sollicitudin mauris. Praesent iaculis\n"
      "faucibus diam, id pharetra nunc egestas vel. Nulla ultricies quam et augue\n"
      "pellentesque ultrices. Suspendisse in nulla ullamcorper, lacinia sapien non,\n"
      "tristique enim. Donec iaculis sollicitudin scelerisque. Morbi lorem purus,\n"
      "consectetur et cursus ac, interdum sit amet nulla. In ullamcorper placerat\n"
      "velit nec aliquet. Nunc non tincidunt nibh, eget rhoncus justo. Sed sit amet\n"
      "libero neque.\n"
    ;

    const auto REPS = 10000;

    auto time_encoding_begin = std::chrono::system_clock::now();
    std::string encoded;
    for (int i = 0; i < REPS; ++i) {
	    encoded = base64_encode(reinterpret_cast<const unsigned char*>(lorem_ipsum.c_str()), lorem_ipsum.length());
    }
    auto time_encoding_end = std::chrono::system_clock::now();

    auto time_decoding_begin = std::chrono::system_clock::now();
    std::string decoded;
    for (int i = 0; i < REPS; ++i) {
	    decoded = base64_decode(encoded);
    }
    auto time_decoding_end = std::chrono::system_clock::now();

    std::chrono::duration<double> duration_encoding = time_encoding_end - time_encoding_begin;
    std::chrono::duration<double> duration_decoding = time_decoding_end - time_decoding_begin;

    std::cout << "Encoding took: " << duration_encoding.count() << std::endl;
    std::cout << "Decoding took: " << duration_decoding.count() << std::endl;

    if (decoded != lorem_ipsum) {
      std::cout << "Strings differ!" << std::endl;
      return 1;
    }
    return 0;
}
